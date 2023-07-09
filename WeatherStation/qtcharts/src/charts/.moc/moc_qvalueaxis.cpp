/****************************************************************************
** Meta object code from reading C++ file 'qvalueaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/valueaxis/qvalueaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalueaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QValueAxis_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QValueAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QValueAxis_t qt_meta_stringdata_QtCharts__QValueAxis = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtCharts::QValueAxis"
QT_MOC_LITERAL(1, 21, 10), // "minChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "min"
QT_MOC_LITERAL(4, 37, 10), // "maxChanged"
QT_MOC_LITERAL(5, 48, 3), // "max"
QT_MOC_LITERAL(6, 52, 12), // "rangeChanged"
QT_MOC_LITERAL(7, 65, 16), // "tickCountChanged"
QT_MOC_LITERAL(8, 82, 9), // "tickCount"
QT_MOC_LITERAL(9, 92, 21), // "minorTickCountChanged"
QT_MOC_LITERAL(10, 114, 18), // "labelFormatChanged"
QT_MOC_LITERAL(11, 133, 6), // "format"
QT_MOC_LITERAL(12, 140, 16), // "applyNiceNumbers"
QT_MOC_LITERAL(13, 157, 11), // "labelFormat"
QT_MOC_LITERAL(14, 169, 14) // "minorTickCount"

    },
    "QtCharts::QValueAxis\0minChanged\0\0min\0"
    "maxChanged\0max\0rangeChanged\0"
    "tickCountChanged\0tickCount\0"
    "minorTickCountChanged\0labelFormatChanged\0"
    "format\0applyNiceNumbers\0labelFormat\0"
    "minorTickCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QValueAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    2,   55,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      10,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    3,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       3,
       0,
       1,
       5,
       4,

       0        // eod
};

void QtCharts::QValueAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QValueAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->minChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->maxChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->tickCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->minorTickCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->labelFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->applyNiceNumbers(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QValueAxis::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValueAxis::minChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QValueAxis::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValueAxis::maxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QValueAxis::*)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValueAxis::rangeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QValueAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValueAxis::tickCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QValueAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValueAxis::minorTickCountChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QValueAxis::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValueAxis::labelFormatChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QValueAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tickCount(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->min(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->max(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->labelFormat(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->minorTickCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QValueAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTickCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMin(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setMax(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setLabelFormat(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setMinorTickCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QValueAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractAxis::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QValueAxis.data,
    qt_meta_data_QtCharts__QValueAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QValueAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QValueAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QValueAxis.stringdata0))
        return static_cast<void*>(this);
    return QAbstractAxis::qt_metacast(_clname);
}

int QtCharts::QValueAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAxis::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QValueAxis::minChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QValueAxis::maxChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QValueAxis::rangeChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QValueAxis::tickCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QValueAxis::minorTickCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::QValueAxis::labelFormatChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
