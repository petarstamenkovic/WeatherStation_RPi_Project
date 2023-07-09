/****************************************************************************
** Meta object code from reading C++ file 'qbarcategoryaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/barcategoryaxis/qbarcategoryaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbarcategoryaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QBarCategoryAxis_t {
    QByteArrayData data[12];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QBarCategoryAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QBarCategoryAxis_t qt_meta_stringdata_QtCharts__QBarCategoryAxis = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QtCharts::QBarCategoryAxis"
QT_MOC_LITERAL(1, 27, 17), // "categoriesChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "minChanged"
QT_MOC_LITERAL(4, 57, 3), // "min"
QT_MOC_LITERAL(5, 61, 10), // "maxChanged"
QT_MOC_LITERAL(6, 72, 3), // "max"
QT_MOC_LITERAL(7, 76, 12), // "rangeChanged"
QT_MOC_LITERAL(8, 89, 12), // "countChanged"
QT_MOC_LITERAL(9, 102, 5), // "clear"
QT_MOC_LITERAL(10, 108, 10), // "categories"
QT_MOC_LITERAL(11, 119, 5) // "count"

    },
    "QtCharts::QBarCategoryAxis\0categoriesChanged\0"
    "\0minChanged\0min\0maxChanged\0max\0"
    "rangeChanged\0countChanged\0clear\0"
    "categories\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QBarCategoryAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,
       7,    2,   51,    2, 0x06 /* Public */,
       8,    0,   56,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    6,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QStringList, 0x00495103,
       4, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,
      11, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,

       0        // eod
};

void QtCharts::QBarCategoryAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QBarCategoryAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->categoriesChanged(); break;
        case 1: _t->minChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->maxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->rangeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->countChanged(); break;
        case 5: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QBarCategoryAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarCategoryAxis::categoriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QBarCategoryAxis::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarCategoryAxis::minChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QBarCategoryAxis::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarCategoryAxis::maxChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QBarCategoryAxis::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarCategoryAxis::rangeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QBarCategoryAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarCategoryAxis::countChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QBarCategoryAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->categories(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->min(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->max(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QBarCategoryAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCategories(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setMin(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMax(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QBarCategoryAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractAxis::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QBarCategoryAxis.data,
    qt_meta_data_QtCharts__QBarCategoryAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QBarCategoryAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QBarCategoryAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QBarCategoryAxis.stringdata0))
        return static_cast<void*>(this);
    return QAbstractAxis::qt_metacast(_clname);
}

int QtCharts::QBarCategoryAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAxis::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QtCharts::QBarCategoryAxis::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QBarCategoryAxis::minChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QBarCategoryAxis::maxChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QBarCategoryAxis::rangeChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QBarCategoryAxis::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
