/****************************************************************************
** Meta object code from reading C++ file 'qvbarmodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../barchart/qvbarmodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvbarmodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QVBarModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QVBarModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QVBarModelMapper_t qt_meta_stringdata_QtCharts__QVBarModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QtCharts::QVBarModelMapper"
QT_MOC_LITERAL(1, 27, 14), // "seriesReplaced"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "modelReplaced"
QT_MOC_LITERAL(4, 57, 24), // "firstBarSetColumnChanged"
QT_MOC_LITERAL(5, 82, 23), // "lastBarSetColumnChanged"
QT_MOC_LITERAL(6, 106, 15), // "firstRowChanged"
QT_MOC_LITERAL(7, 122, 15), // "rowCountChanged"
QT_MOC_LITERAL(8, 138, 6), // "series"
QT_MOC_LITERAL(9, 145, 19), // "QAbstractBarSeries*"
QT_MOC_LITERAL(10, 165, 5), // "model"
QT_MOC_LITERAL(11, 171, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(12, 191, 17), // "firstBarSetColumn"
QT_MOC_LITERAL(13, 209, 16), // "lastBarSetColumn"
QT_MOC_LITERAL(14, 226, 8), // "firstRow"
QT_MOC_LITERAL(15, 235, 8) // "rowCount"

    },
    "QtCharts::QVBarModelMapper\0seriesReplaced\0"
    "\0modelReplaced\0firstBarSetColumnChanged\0"
    "lastBarSetColumnChanged\0firstRowChanged\0"
    "rowCountChanged\0series\0QAbstractBarSeries*\0"
    "model\0QAbstractItemModel*\0firstBarSetColumn\0"
    "lastBarSetColumn\0firstRow\0rowCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QVBarModelMapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QtCharts::QVBarModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QVBarModelMapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->seriesReplaced(); break;
        case 1: _t->modelReplaced(); break;
        case 2: _t->firstBarSetColumnChanged(); break;
        case 3: _t->lastBarSetColumnChanged(); break;
        case 4: _t->firstRowChanged(); break;
        case 5: _t->rowCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QVBarModelMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBarModelMapper::seriesReplaced)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QVBarModelMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBarModelMapper::modelReplaced)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QVBarModelMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBarModelMapper::firstBarSetColumnChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QVBarModelMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBarModelMapper::lastBarSetColumnChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QVBarModelMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBarModelMapper::firstRowChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QVBarModelMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBarModelMapper::rowCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVBarModelMapper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractBarSeries**>(_v) = _t->series(); break;
        case 1: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->firstBarSetColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lastBarSetColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->firstRow(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QVBarModelMapper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSeries(*reinterpret_cast< QAbstractBarSeries**>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 2: _t->setFirstBarSetColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLastBarSetColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFirstRow(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setRowCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QVBarModelMapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QBarModelMapper::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QVBarModelMapper.data,
    qt_meta_data_QtCharts__QVBarModelMapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QVBarModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QVBarModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QVBarModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QBarModelMapper::qt_metacast(_clname);
}

int QtCharts::QVBarModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBarModelMapper::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QVBarModelMapper::seriesReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QVBarModelMapper::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QVBarModelMapper::firstBarSetColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QVBarModelMapper::lastBarSetColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QVBarModelMapper::firstRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QVBarModelMapper::rowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
