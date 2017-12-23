#include "property.h"

Property::Property(QString n){
    this->name=n;
}

void Property::addValue(int value){
    values.push_back(value);
}

Property::~Property(){}
