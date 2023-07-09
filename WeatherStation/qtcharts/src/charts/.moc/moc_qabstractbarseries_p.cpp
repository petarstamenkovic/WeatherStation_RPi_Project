/****************************************************************************
** Meta object code from reading C++ file 'qabstractbarseries_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../barchart/qabstractbarseries_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractbarseries_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QAbstractBarSeriesPrivate_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QAbstractBarSeriesPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QAbstractBarSeriesPrivate_t qt_meta_stringdata_QtCharts__QAbstractBarSeriesPrivate = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtCharts::QAbstractBarSeriesP..."
QT_MOC_LITERAL(1, 36, 7), // "clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "index"
QT_MOC_LITERAL(4, 51, 8), // "QBarSet*"
QT_MOC_LITERAL(5, 60, 6), // "barset"
QT_MOC_LITERAL(6, 67, 7), // "pressed"
QT_MOC_LITERAL(7, 75, 8), // "released"
QT_MOC_LITERAL(8, 84, 13), // "doubleClicked"
QT_MOC_LITERAL(9, 98, 11), // "updatedBars"
QT_MOC_LITERAL(10, 110, 13), // "updatedLayout"
QT_MOC_LITERAL(11, 124, 16), // "restructuredBars"
QT_MOC_LITERAL(12, 141, 20), // "labelsVisibleChanged"
QT_MOC_LITERAL(13, 162, 7), // "visible"
QT_MOC_LITERAL(14, 170, 14) // "visibleChanged"

    },
    "QtCharts::QAbstractBarSeriesPrivate\0"
    "clicked\0\0index\0QBarSet*\0barset\0pressed\0"
    "released\0doubleClicked\0updatedBars\0"
    "updatedLayout\0restructuredBars\0"
    "labelsVisibleChanged\0visible\0"
    "visibleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QAbstractBarSeriesPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,
       7,    2,   69,    2, 0x06 /* Public */,
       8,    2,   74,    2, 0x06 /* Public */,
       9,    0,   79,    2, 0x06 /* Public */,
      10,    0,   80,    2, 0x06 /* Public */,
      11,    0,   81,    2, 0x06 /* Public */,
      12,    1,   82,    2, 0x06 /* Public */,
      14,    0,   85,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void QtCharts::QAbstractBarSeriesPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractBarSeriesPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 1: _t->pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 2: _t->released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 3: _t->doubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 4: _t->updatedBars(); break;
        case 5: _t->updatedLayout(); break;
        case 6: _t->restructuredBars(); break;
        case 7: _t->labelsVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->visibleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractBarSeriesPrivate::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::pressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::released)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)(int , QBarSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::doubleClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::updatedBars)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::updatedLayout)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::restructuredBars)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::labelsVisibleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QAbstractBarSeriesPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractBarSeriesPrivate::visibleChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QAbstractBarSeriesPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSeriesPrivate::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QAbstractBarSeriesPrivate.data,
    qt_meta_data_QtCharts__QAbstractBarSeriesPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QAbstractBarSeriesPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QAbstractBarSeriesPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QAbstractBarSeriesPrivate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeriesPrivate::qt_metacast(_clname);
}

int QtCharts::QAbstractBarSeriesPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeriesPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtCharts::QAbstractBarSeriesPrivate::clicked(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QAbstractBarSeriesPrivate::pressed(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QAbstractBarSeriesPrivate::released(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QAbstractBarSeriesPrivate::doubleClicked(int _t1, QBarSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QAbstractBarSeriesPrivate::updatedBars()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QAbstractBarSeriesPrivate::updatedLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QAbstractBarSeriesPrivate::restructuredBars()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtCharts::QAbstractBarSeriesPrivate::labelsVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtCharts::QAbstractBarSeriesPrivate::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
