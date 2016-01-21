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

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;

private:
    Ui::MainWindow *ui;
    QString curFile;

private:
    bool maybeSave();
    void loadFile(const QString &fileName);
    void setCurrentFile(const QString &fileName);
    bool saveFile();
    bool saveAsFile();
    void writeSettings();

private slots:

    void newFileSlot();
    void openSlot();
    bool saveSlot();
    bool saveAsSlot();
    void aboutSlot();
    void documentWasModifiedSlot();
    void dateTimeSlot();

};

#endif // MAINWINDOW_H
