#include "widget.h"
#include "ui_widget.h"

Widget::Widget(int x, int y, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("EXAMPLE");

    model = new QStandardItemModel(x, y);
    ui->tableView->setModel(model);
    for(int i = 0; i < x; i++){
        ui->tableView->setColumnWidth(i, 100);
    }
    for(int i = 0; i < x; i++){
        ui->tableView->setRowHeight(i, 100);
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setItem(int x, int y, QString s){
    model->setItem(x, y, new QStandardItem(s));
}
