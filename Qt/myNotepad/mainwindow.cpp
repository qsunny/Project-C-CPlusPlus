#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

//新建文件
void MainWindow::newFileSlot() {

    qDebug()<<"click";

    if (maybeSave()) {
        ui->textEdit->clear();
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
void MainWindow::loadFile(QString fileName) {
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


}


bool MainWindow::saveSlot() {

    return false;
}

bool MainWindow::saveAsSlot() {

    return false;
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
        if (ret == QMessageBox::Save)
            return saveSlot();
        else if (ret == QMessageBox::Cancel)
            return false;
    }
    return true;
}




