#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql>

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
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::connDb() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setHostName("localhost");
    db.setDatabaseName("test.db");
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

    while (query.next()) {
        qDebug()<<"execute.......";
        int id = query.value(0).toInt();
        QString username = query.value(1).toString();
        qDebug() << id << username ;


    }
}





