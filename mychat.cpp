#include "mychat.h"
#include "ui_mychat.h"

mychat::mychat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mychat)
{
    ui->setupUi(this);
}

mychat::~mychat()
{
    delete ui;
}
