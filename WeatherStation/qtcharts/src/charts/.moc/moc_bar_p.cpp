/****************************************************************************
** Meta object code from reading C++ file 'bar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../barchart/bar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__Bar_t {
    QByteArrayData data[11];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__Bar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__Bar_t qt_meta_stringdata_QtCharts__Bar = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QtCharts::Bar"
QT_MOC_LITERAL(1, 14, 7), // "clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "index"
QT_MOC_LITERAL(4, 29, 8), // "QBarSet*"
QT_MOC_LITERAL(5, 38, 6), // "barset"
QT_MOC_LITERAL(6, 45, 7), // "hovered"
QT_MOC_LITERAL(7, 53, 6), // "status"
QT_MOC_LITERAL(8, 60, 7), // "pressed"
QT_MOC_LITERAL(9, 68, 8), // "released"
QT_MOC_LITERAL(10, 77, 13) // "doubleClicked"

    },
    "QtCharts::Bar\0clicked\0\0index\0QBarSet*\0"
    "barset\0hovered\0status\0pressed\0released\0"
    "doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__Bar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    3,   44,    2, 0x06 /* Public */,
       8,    2,   51,    2, 0x06 /* Public */,
       9,    2,   56,    2, 0x06 /* Public */,
      10,    2,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, 0x80000000 | 4,    7,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void QtCharts::Bar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QBarSet*(*)>(_a[3]))); break;
        case 2: _t->pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 3: _t->released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 4: _t->doubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Bar::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bar::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Bar::*)(bool , int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bar::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Bar::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bar::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Bar::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bar::released)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Bar::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bar::doubleClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::Bar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__Bar.data,
    qt_meta_data_QtCharts__Bar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::Bar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::Bar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__Bar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::Bar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QtCharts::Bar::clicked(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::Bar::hovered(bool _t1, int _t2, QBarSet * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::Bar::pressed(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::Bar::released(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::Bar::doubleClicked(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
