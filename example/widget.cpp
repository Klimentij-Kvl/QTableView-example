#include "widget.h"
#include "ui_widget.h"

Widget::Widget(int x, int y, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QStandardItemModel(x, y);
    ui->tableView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setItem(int x, int y, QString s){
    model->setItem(x, y, new QStandardItem(s));
}
