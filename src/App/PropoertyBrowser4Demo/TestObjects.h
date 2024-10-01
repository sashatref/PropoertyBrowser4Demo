#pragma once

#include <QObject>
#include <HelperLibrary/igadget.h>

struct SimpleStruct : public IGadget
{
    Q_GADGET
    Q_PROPERTY(int val_int MEMBER m_val_int)
    Q_PROPERTY(QString val_string MEMBER m_val_string)
    Q_PROPERTY(double val_double MEMBER m_val_double)
public:
    int m_val_int{};
    QString m_val_string;
    double m_val_double{};

    const QMetaObject *getMetaObject() const override;
};

Q_DECLARE_METATYPE(SimpleStruct)
