#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
