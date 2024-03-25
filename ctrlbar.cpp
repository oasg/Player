#include "ctrlbar.h"
#include "ui_ctrlbar.h"

ctrlbar::ctrlbar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ctrlbar)
{
    ui->setupUi(this);

    //set play icon

    //set stop icon
}

ctrlbar::~ctrlbar()
{
    delete ui;
}

void ctrlbar::on_forwardBtn_clicked()
{
    qDebug()<<"On player btn";

}

