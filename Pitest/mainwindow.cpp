#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(320, 240);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("This Text Has Changed");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("Button Left");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Button Right");
}
