#pragma once

#include <QColor>
#include <QDateTime>
#include <QFont>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QUrl>

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

struct ComplexStruct : public IGadget
{
    Q_GADGET
    Q_PROPERTY(int val_int MEMBER m_val_int)
    Q_PROPERTY(QString val_string MEMBER m_val_string)
    Q_PROPERTY(double val_double MEMBER m_val_double)
    Q_PROPERTY(float val_float MEMBER m_val_float)
    Q_PROPERTY(bool val_bool MEMBER m_val_bool)
    Q_PROPERTY(QByteArray val_bytearray MEMBER m_val_bytearray)
    Q_PROPERTY(QColor val_color MEMBER m_val_color)
    Q_PROPERTY(QDate val_date MEMBER m_val_date)
    Q_PROPERTY(QDateTime val_datetime MEMBER m_val_datetime)
    Q_PROPERTY(QTime val_time MEMBER m_val_time)
    Q_PROPERTY(QFont val_font MEMBER m_val_font)
    Q_PROPERTY(QPixmap val_pixmap MEMBER m_val_pixmap)
    Q_PROPERTY(QRect val_rect MEMBER m_val_rect)
    Q_PROPERTY(QRectF val_rectf MEMBER m_val_rectf)
    Q_PROPERTY(QSize val_size MEMBER m_val_size)
    Q_PROPERTY(QSizeF val_sizef MEMBER m_val_sizef)
    Q_PROPERTY(QUrl val_url MEMBER m_val_url)
public:
    int m_val_int{};
    QString m_val_string;
    double m_val_double{};
    float m_val_float{};
    bool m_val_bool{};
    QByteArray m_val_bytearray;
    QColor m_val_color;
    QDate m_val_date;
    QDateTime m_val_datetime;
    QTime m_val_time;
    QFont m_val_font;
    QPixmap m_val_pixmap;
    QRect m_val_rect;
    QRectF m_val_rectf;
    QSize m_val_size;
    QSizeF m_val_sizef;
    QStringList m_val_stringlist;
    QUrl m_val_url;

    const QMetaObject *getMetaObject() const override;
};

Q_DECLARE_METATYPE(SimpleStruct)
Q_DECLARE_METATYPE(ComplexStruct)
