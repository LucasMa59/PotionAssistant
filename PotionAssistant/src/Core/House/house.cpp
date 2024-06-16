#include "house.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>

/*HOUSE CONSTRUCTOR
 *
 * name <QString> : name in french of the house
 * color <QString> : color given in hexa form
 */
House::House(QString name, QString color, QWidget* parent):
    _name(name),
    _color(color),
    _parent(parent)
{
    QFile ingredientFile("../../prompt/"+_name+".txt");
    if(ingredientFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        /*COMING SOON*/
    } else {
        QMessageBox::warning(_parent, "Fichier manquant", "Le fichier "+_name+".txt n'a pas été trouvé.");
    }
}

QString House::color() const
{
    return _color;
}

QString House::name() const
{
    return _name;
}

QHash<QString, int> House::ingredientValues() const
{
    return _ingredientValues;
}


