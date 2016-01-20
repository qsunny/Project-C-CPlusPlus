#include "textfinder.h"
#include "ui_textfinder.h"
#include <QMessageBox>

TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
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



}
