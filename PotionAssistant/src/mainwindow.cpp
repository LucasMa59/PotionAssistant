#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../src/Core/House/house.h"
#include "../src/Core/Ingredients/ingredients.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*CREATION OF HOUSES*/
    House gryffondor("Gryffondor", "#8a1d1d", this);
    House poufsouffle("Poufsouffle", "#89700a", this);
    House serdaigle("Serdaigle", "#22476c", this);
    House serpentard("Serpentard", "#1a541a", this);
    House poudlard("Poudlard", "", this);

    /*CREATION OF INGREDIENT LIST*/
    Ingredients ingredientList("../../prompt/IngredientList.txt", this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
