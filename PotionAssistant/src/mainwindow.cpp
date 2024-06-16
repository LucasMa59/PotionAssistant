#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../src/Core/House/house.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*CREATION OF HOUSES*/
    House Gryffondor("Gryffondor", "#8a1d1d", this);
    House Poufsouffle("Poufsouffle", "#89700a", this);
    House Serdaigle("Serdaigle", "#22476c", this);
    House Serpentard("Serpentard", "#1a541a", this);
    House Poudlard("Poudlard", "", this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
