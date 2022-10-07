#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //读取方位数据文件 创建结构体？
}

Widget::~Widget()
{
    delete ui;
}

