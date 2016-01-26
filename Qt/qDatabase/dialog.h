#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSqlDatabase>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QSqlDatabase db;

private slots:
    void userList();
    void addUser();
    void delUser();
    void updateUser();
    void changeEditContent();

private:
    bool connDb();
    void reloadUserList();


};

#endif // DIALOG_H
