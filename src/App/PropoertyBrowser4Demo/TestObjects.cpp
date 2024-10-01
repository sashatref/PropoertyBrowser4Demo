#include "TestObjects.h"

const QMetaObject *SimpleStruct::getMetaObject() const
{
    return &staticMetaObject;
}

const QMetaObject *ComplexStruct::getMetaObject() const
{
    return &staticMetaObject;
}
