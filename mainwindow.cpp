#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(what_number()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(what_number()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::what_number()
{
    QPushButton *button=(QPushButton *)sender();
    ui->decision->setText(button->text());
}
