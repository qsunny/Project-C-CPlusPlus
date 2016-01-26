#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QDebug>
#include <QVariant>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{        
    ui->setupUi(this);
    bool connFlag = this->connDb();
    if(connFlag) {
        this->userList();
    }
    QObject::connect(ui->addButton,SIGNAL(clicked()),this,SLOT(addUser()));
    QObject::connect(ui->delButton,SIGNAL(clicked()),this,SLOT(delUser()));
    QObject::connect(ui->updateButton,SIGNAL(clicked()),this,SLOT(updateUser()));
    QObject::connect(ui->userListWidget,SIGNAL(itemSelectionChanged()),this,SLOT(changeEditContent()));
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::connDb() {
    db = QSqlDatabase::database();
    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setHostName("localhost");

    db.setDatabaseName("D:/qtworkspace/qDatabase/test.db");
    //db.setUserName("mojito");
    //db.setPassword("J0a1m8");
    bool ok = db.open();
    if(ok) {
        qDebug()<<"open database success";
    } else {
        qDebug()<<"open database failture"<<this->db.lastError().text();
    }
    return ok;

}

void Dialog::userList() {
qDebug()<<"execute.......";
    QSqlQuery query;

    query.exec("SELECT * from user");
    //query.exec("SELECT * FROM sqlite_master");
    //检查query是否生效
    if(!query.isActive())
       {
            qDebug()<<"Query Error!"<<query.lastError().text();

        }

    int i=0;
     ui->userListWidget->setColumnCount(3);
    while (query.next()) {
        ui->userListWidget->setRowCount(i+1);

        int id = query.value(0).toInt();
        QString username = query.value(1).toString();
        QString password = query.value(2).toString();
        qDebug() << id << username <<password;
        QTableWidgetItem* iditem =new QTableWidgetItem(QString::number(id));
        QTableWidgetItem* usernameitem = new QTableWidgetItem(username);
        QTableWidgetItem* passworditem=new QTableWidgetItem(password);

        this->ui->userListWidget->setItem(i,0,iditem);
        this->ui->userListWidget->setItem(i,1,usernameitem);
        this->ui->userListWidget->setItem(i,2,passworditem);
        i++;

    }
    this->ui->userListWidget->show();
}

void Dialog::reloadUserList() {
    this->ui->userListWidget->clear();

    this->userList();

}

void Dialog::addUser(){
    QSqlQuery query;
    query.prepare("INSERT INTO user (id, username, password) "
                 "VALUES (:id, :username, :password)");
    QString id = ui->IdEdit->text().trimmed();
    QString username = ui->usernameEdit->text().trimmed();
    QString password = ui->passwordEdit->text().trimmed();

    if(id.isEmpty()) {
        QMessageBox::information(this,"Add User","Id is not empty!!");
        return ;
    }

    if(username.isEmpty()) {
        QMessageBox::information(this,"Add User","username is not empty!!");
        return ;
    }

    if(password.isEmpty()) {
        QMessageBox::information(this,"Add User","Password is not empty!!");
        return ;
    }

    query.bindValue(":id", id);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    bool iFlag = query.exec();
    if(iFlag) {

        this->reloadUserList();
        ui->IdEdit->clear();
        ui->usernameEdit->clear();
        ui->passwordEdit->clear();
    } else {
         qDebug()<<"Add user failture!"<<query.lastError().text();
    }

}

void Dialog::delUser() {
    int curRow = ui->userListWidget->currentRow();
    qDebug()<<curRow;
    if(curRow<0) return;
    QTableWidgetItem* idItem= ui->userListWidget->item(curRow,0);
//    QTableWidgetItem* usernameItem= ui->userListWidget->item(curRow,1);
  //  QTableWidgetItem* passwordItem= ui->userListWidget->item(curRow,2);
    QString id = idItem->text();
    qDebug()<<"id=" + id;

    QSqlQuery query;
    query.prepare("delete from user where id=:id");
    query.bindValue(":id",id);
    bool dFlag = query.exec();
    if(dFlag) {
        ui->userListWidget->removeRow(curRow);
    } else {
        qDebug()<<"delte user failture" + query.lastError().text();
    }

    /*
    ui->userListWidget->takeItem(curRow,0);
    ui->userListWidget->takeItem(curRow,1);
    ui->userListWidget->takeItem(curRow,2);

    delete idItem;
    delete usernameItem;
    delete passwordItem;
    */
}

void Dialog::updateUser() {
    int curRow = ui->userListWidget->currentRow();
    if(curRow<0) return;
    QTableWidgetItem* idItem= ui->userListWidget->item(curRow,0);
    QString oid = idItem->text();


    QSqlQuery query;
    query.prepare("update user set id=:id, username=:username, password=:password where id=:oid");
    QString id = ui->IdEdit->text().trimmed();
    QString username = ui->usernameEdit->text().trimmed();
    QString password = ui->passwordEdit->text().trimmed();

    if(id.isEmpty()) {
        QMessageBox::information(this,"Add User","Id is not empty!!");
        return ;
    }

    if(username.isEmpty()) {
        QMessageBox::information(this,"Add User","username is not empty!!");
        return ;
    }

    if(password.isEmpty()) {
        QMessageBox::information(this,"Add User","Password is not empty!!");
        return ;
    }

    query.bindValue(":id", id);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":oid",oid);
    bool uFlag = query.exec();
    if(uFlag) {
        ui->IdEdit->clear();
        ui->usernameEdit->clear();
        ui->passwordEdit->clear();
        this->reloadUserList();
    } else {
        qDebug()<<"update user failture" + query.lastError().text();
    }


}

void Dialog::changeEditContent() {
    int curRow = ui->userListWidget->currentRow();
    QTableWidgetItem* idItem= ui->userListWidget->item(curRow,0);
    QTableWidgetItem* usernameItem= ui->userListWidget->item(curRow,1);
    QTableWidgetItem* passwordItem= ui->userListWidget->item(curRow,2);
    QString oid = idItem->text();
    QString ousername = usernameItem->text();
    QString opassword = passwordItem->text();
    this->ui->IdEdit->setText(oid);
    this->ui->usernameEdit->setText(ousername);
    this->ui->passwordEdit->setText(opassword);
}




