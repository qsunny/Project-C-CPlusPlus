#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDateTime>
#include <QLocale>
#include <QCloseEvent>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->textEdit->document(), SIGNAL(contentsChanged()),this, SLOT(documentWasModifiedSlot()));
    //新建
    QObject::connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(newFileSlot()));
    //打开
    QObject::connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(openSlot()));
    //保存
    QObject::connect(ui->actionSave,SIGNAL(triggered()),this,SLOT(saveSlot()));
    //另存为
    QObject::connect(ui->actionSaveAs,SIGNAL(triggered()),this,SLOT(saveAsSlot()));
    //退出
    QObject::connect(ui->actionQuit,SIGNAL(triggered()),this,SLOT(close()));

    QObject::connect(ui->actionUndo,SIGNAL(triggered()),ui->textEdit,SLOT(undo()));
    //复制
    QObject::connect(ui->actionCopy,SIGNAL(triggered()),ui->textEdit,SLOT(copy()));
    QObject::connect(ui->actionPaste,SIGNAL(triggered()),ui->textEdit,SLOT(paste()));
    QObject::connect(ui->actionCut,SIGNAL(triggered()),ui->textEdit,SLOT(cut()));
    QObject::connect(ui->actionSelectAll,SIGNAL(triggered()),ui->textEdit,SLOT(selectAll()));
    QObject::connect(ui->actionDateTime,SIGNAL(triggered()),this,SLOT(dateTimeSlot()));
    this->setCurrentFile("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (maybeSave()) {
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
}

void MainWindow::writeSettings()
{
    QSettings settings("QtProject", "Application Example");
    settings.setValue("pos", pos());
    settings.setValue("size", size());
}


//新建文件
void MainWindow::newFileSlot() {

    qDebug()<<"click";

    if (maybeSave()) {
        ui->textEdit->clear();
        setCurrentFile("");
    }


}

//打开文件
void MainWindow::openSlot() {

    QFileDialog fileDialog(this,Qt::Dialog);
    QString fileName = fileDialog.getOpenFileName();
    if (!fileName.isEmpty())
        loadFile(fileName);


}

//加载打开的文件
void MainWindow::loadFile(const QString &fileName) {
    QFile inputFile(fileName);
    if (!inputFile.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(inputFile.errorString()));
        return;
    }

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();
    ui->textEdit->setPlainText(line);
    setCurrentFile(fileName);

}

//保存文件
bool MainWindow::saveFile() {
    QFile file(curFile);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(curFile)
                             .arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    QString line = ui->textEdit->toPlainText();
    qDebug()<<line;
    out<< line;
    file.close();

    return true;
}

//另存文件为
bool MainWindow::saveAsFile() {
    QFileDialog dialog(this);
    dialog.setWindowModality(Qt::WindowModal);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    QStringList files;
    if (dialog.exec())
      files = dialog.selectedFiles();
    else
       return false;

   this->setCurrentFile(files.at(0));
   return saveFile();

}

bool MainWindow::saveSlot() {
    if (curFile.isEmpty()) {
        return saveAsFile();
    } else {
        return saveFile();
    }
}

bool MainWindow::saveAsSlot() {
    return saveAsFile();
}

void MainWindow::aboutSlot() {

}

void MainWindow::documentWasModifiedSlot() {
    //setWindowModified(ui->textEdit->document()->isModified());

    if(ui->textEdit->document()->isModified()) {
       // qDebug()<<"文本内容被改变";
    } else {
       // qDebug()<<"文本内容没有改变";

    }

}

bool MainWindow::maybeSave()
{
    if (ui->textEdit->document()->isModified()) {
        QMessageBox::StandardButton ret;
        ret = QMessageBox::warning(this, tr("Application"),
                     tr("The document has been modified.\n"
                        "Do you want to save your changes?"),
                     QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        if (ret == QMessageBox::Save) {
            if(curFile.isEmpty()) return saveAsFile();
            return saveFile();

        } else if (ret == QMessageBox::Cancel) {
            return false;
        }
    }
    return true;
}

void MainWindow::setCurrentFile(const QString &fileName) {
    curFile = fileName;
    ui->textEdit->document()->setModified(false);
    setWindowModified(false);

    QString shownName = curFile;
    if (curFile.isEmpty())
       shownName = "untitled.txt";
    setWindowFilePath(shownName);

}


void MainWindow::dateTimeSlot() {
    QDateTime dateTime = QDateTime::currentDateTime();
    QString curDateTime = dateTime.toString("yyyy-MM-dd hh:mm:ss");
    qDebug() << curDateTime;
    QString line = ui->textEdit->toPlainText();
    if(line.isEmpty()) {
        ui->textEdit->setPlainText(line+curDateTime);
    } else {
        ui->textEdit->setPlainText(line+"\n"+curDateTime);
    }



}




