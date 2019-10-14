#include "mywidget.h"
#include "ui_mywidget.h"
#include <QIcon>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    this->setWindowIcon(QPixmap(":/Image/QtProject-qtcreator.png"));
}

myWidget::~myWidget()
{
    delete ui;
}

