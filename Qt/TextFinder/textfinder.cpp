#include "textfinder.h"
#include "ui_textfinder.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    this->loadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::on_findButton_clicked()
{
    QString keyword = ui->keywordEdit->text().trimmed();
    if(keyword.isEmpty()) {
        QMessageBox::about(NULL, "search", "请输入搜索的关键字!");
        return ;
    }

    ui->textEdit->find(keyword, QTextDocument::FindWholeWords);
}

void TextFinder::loadTextFile() {
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();
    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);

}
