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

    bool connDb();   

private slots:
    void queryUserSlot();
    void addUserSlot();
    void editUserSlot();
    void deleteUserSlot();

};

#endif // DIALOG_H
