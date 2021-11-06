#include "colormania.h"
#include "ui_colormania.h"

ColorMania::ColorMania(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ColorMania)
{
    ui->setupUi(this);
    connect(ui->redSlider,SIGNAL(valueChanged(int)),this,SLOT(change_background()));
    connect(ui->greenSlider,SIGNAL(valueChanged(int)),this,SLOT(change_background()));
    connect(ui->blueSlider,SIGNAL(valueChanged(int)),this,SLOT(change_background()));
}

ColorMania::~ColorMania()
{
    delete ui;
}

void ColorMania::change_background(){

    QString r = QString::number(ui->redBox->value());
    QString g = QString::number(ui->greenBox->value());
    QString b = QString::number(ui->blueBox->value());


    ui->colorArea->setStyleSheet("background-color:rgb("+ r + "," + g + "," + b +")");

};





