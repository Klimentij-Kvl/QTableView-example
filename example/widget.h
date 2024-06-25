#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTableView>
#include <QStandardItemModel>


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(int x, int y, QWidget *parent = nullptr);
    ~Widget();
    void setItem(int x, int y, QString s);

private:
    Ui::Widget *ui;
    QStandardItemModel* model;
};
#endif // WIDGET_H
