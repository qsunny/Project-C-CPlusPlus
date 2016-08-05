#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql>

#include <QDebug>
#include <QVariant>
#include <QStandardItemModel>
#include <QStandardItem>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{        
    ui->setupUi(this);
    bool connFlag = this->connDb();
    if(connFlag) {
        QObject::connect(ui->queryButton,SIGNAL(clicked()),this,SLOT(queryUserSlot()));
    } else {
        QMessageBox::information(this,"Open db","Open db failture!");
    }
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::connDb() {
//    db = QSqlDatabase::addDatabase("QSQLITE");
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.1.112");
    db.setDatabaseName("mydb");
    db.setUserName("root");
    db.setPassword("root");
    //db.setDatabaseName("D:/qtworkspace/qDatabase/test.db");
    bool ok = db.open();
    if(ok) {
        qDebug()<<"open database success";
    } else {
        qDebug()<<"open database failture"<<this->db.lastError().text();
    }
    return ok;

}

void Dialog::queryUserSlot() {
qDebug()<<"execute.......";
    QSqlQuery query;

    query.exec("SELECT * from tbl_user");
    //query.exec("SELECT * from city");
    //query.exec("SELECT * FROM sqlite_master");
    //检查query是否生效
    if(!query.isActive())
       {
            qDebug()<<"Query Error!"<<query.lastError().text();

        }


    QStandardItemModel *model = new QStandardItemModel(1,2,this);

    model->setHorizontalHeaderItem(0,new QStandardItem(QString("id")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("name")));

    int index = 0;
    while (query.next()) {

               // new QListWidgetItem(tr("Fir"), listWidget);
                //new QListWidgetItem(tr("Pine"), listWidget);
        qDebug()<<"execute.......";
        QString id = query.value(0).toString();
        QString username = query.value(1).toString();
        qDebug() << id << username ;



        QStandardItem *iditem = new QStandardItem(id);
        QStandardItem *nameitem = new QStandardItem(username);

        model->setItem(index,0,iditem);
        model->setItem(index,1,nameitem);
        index++;

    }

    ui->m_userList->setModel(model);
    ui->m_userList->setColumnWidth(0,350);
}

/**
 * 添加用户
 */
void Dialog::addUserSlot() {

}

/**
 * 编辑用户
 */
void Dialog::editUserSlot() {

}

/**
 * 删除用户
 */
void Dialog::deleteUserSlot() {

}






