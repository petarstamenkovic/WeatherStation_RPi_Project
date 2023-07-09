/****************************************************************************
** Meta object code from reading C++ file 'qlogvalueaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/logvalueaxis/qlogvalueaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlogvalueaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QLogValueAxis_t {
    QByteArrayData data[12];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QLogValueAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QLogValueAxis_t qt_meta_stringdata_QtCharts__QLogValueAxis = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QtCharts::QLogValueAxis"
QT_MOC_LITERAL(1, 24, 10), // "minChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "min"
QT_MOC_LITERAL(4, 40, 10), // "maxChanged"
QT_MOC_LITERAL(5, 51, 3), // "max"
QT_MOC_LITERAL(6, 55, 12), // "rangeChanged"
QT_MOC_LITERAL(7, 68, 18), // "labelFormatChanged"
QT_MOC_LITERAL(8, 87, 6), // "format"
QT_MOC_LITERAL(9, 94, 11), // "baseChanged"
QT_MOC_LITERAL(10, 106, 4), // "base"
QT_MOC_LITERAL(11, 111, 11) // "labelFormat"

    },
    "QtCharts::QLogValueAxis\0minChanged\0\0"
    "min\0maxChanged\0max\0rangeChanged\0"
    "labelFormatChanged\0format\0baseChanged\0"
    "base\0labelFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QLogValueAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    3,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QReal,   10,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      10, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,

       0        // eod
};

void QtCharts::QLogValueAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QLogValueAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->minChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->maxChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->labelFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->baseChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QLogValueAxis::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValueAxis::minChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QLogValueAxis::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValueAxis::maxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QLogValueAxis::*)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValueAxis::rangeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QLogValueAxis::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValueAxis::labelFormatChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QLogValueAxis::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValueAxis::baseChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QLogValueAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->min(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->max(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->labelFormat(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->base(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QLogValueAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMin(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setMax(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setLabelFormat(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setBase(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QLogValueAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractAxis::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QLogValueAxis.data,
    qt_meta_data_QtCharts__QLogValueAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QLogValueAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QLogValueAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QLogValueAxis.stringdata0))
        return static_cast<void*>(this);
    return QAbstractAxis::qt_metacast(_clname);
}

int QtCharts::QLogValueAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAxis::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QLogValueAxis::minChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QLogValueAxis::maxChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QLogValueAxis::rangeChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QLogValueAxis::labelFormatChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QLogValueAxis::baseChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
