#ifndef HOUSE_H
#define HOUSE_H

#include <QString>
#include <QHash>
#include <QWidget>

class House
{
public:
    House(QString name, QString color, QWidget* parent);

    QString color() const;
    QString name() const;
    QHash<QString, int> ingredientValues() const;

private:
    QString _name;
    QString _color;
    QWidget* _parent;
    QHash<QString, int> _ingredientValues;
};

#endif // HOUSE_H
