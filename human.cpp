#include "human.h"

QString Human::getName() const
{
    return name;
}

void Human::setName(const QString &name)
{
    this->name = name;
}

QString Human::toString()
{
    return QString("name = ").append(name);
}

Human::Human(QString name) : name(name)
{
    //this->name = name;
}
