#include "ingredients.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

Ingredients::Ingredients(QString fileName, QWidget* parent)
{
    QFile ingredientFile(fileName);
    if(ingredientFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream ingContent(&ingredientFile);
        while(!ingContent.atEnd())
        {
            QString line = ingContent.readLine().split("[b]").last().split("[/b]").first();
            if(line.startsWith(" "))
            {
                line.removeFirst();
            }
            line = line.toLower();

            ingredientList << line;
            qDebug() << "Read ingredient :" << line;
        }
    } else {
        QMessageBox::warning(parent, "Fichier manquant", "Le fichier IngredientList.txt n'a pas été trouvé.");
    }
}

QStringList Ingredients::getIngredientList() const
{
    return ingredientList;
}
