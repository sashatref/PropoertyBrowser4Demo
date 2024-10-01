#include "TestObjects.h"

const QMetaObject *SimpleStruct::getMetaObject() const
{
    return &staticMetaObject;
}
