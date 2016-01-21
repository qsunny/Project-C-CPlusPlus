#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private:
    bool maybeSave();
    void loadFile(QString filename);

private slots:

    void newFileSlot();
    void openSlot();
    bool saveSlot();
    bool saveAsSlot();
    void aboutSlot();
    void documentWasModifiedSlot();

};

#endif // MAINWINDOW_H
