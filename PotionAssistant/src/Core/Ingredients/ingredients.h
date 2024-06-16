#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <QString>
#include <QStringList>
#include <QWidget>

class Ingredients
{
public:
    Ingredients(QString fileName, QWidget* parent);

    QStringList getIngredientList() const;

private:
    QStringList ingredientList;
};

#endif // INGREDIENTS_H
