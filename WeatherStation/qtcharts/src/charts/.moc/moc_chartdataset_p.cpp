/****************************************************************************
** Meta object code from reading C++ file 'chartdataset_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../chartdataset_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartdataset_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__ChartDataSet_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__ChartDataSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__ChartDataSet_t qt_meta_stringdata_QtCharts__ChartDataSet = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QtCharts::ChartDataSet"
QT_MOC_LITERAL(1, 23, 9), // "axisAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(4, 49, 4), // "axis"
QT_MOC_LITERAL(5, 54, 11), // "axisRemoved"
QT_MOC_LITERAL(6, 66, 11), // "seriesAdded"
QT_MOC_LITERAL(7, 78, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(8, 95, 6), // "series"
QT_MOC_LITERAL(9, 102, 13), // "seriesRemoved"
QT_MOC_LITERAL(10, 116, 14) // "reverseChanged"

    },
    "QtCharts::ChartDataSet\0axisAdded\0\0"
    "QAbstractAxis*\0axis\0axisRemoved\0"
    "seriesAdded\0QAbstractSeries*\0series\0"
    "seriesRemoved\0reverseChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__ChartDataSet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       9,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtCharts::ChartDataSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChartDataSet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->axisAdded((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisRemoved((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->seriesAdded((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 3: _t->seriesRemoved((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 4: _t->reverseChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChartDataSet::*)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartDataSet::axisAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChartDataSet::*)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartDataSet::axisRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChartDataSet::*)(QAbstractSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartDataSet::seriesAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChartDataSet::*)(QAbstractSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartDataSet::seriesRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::ChartDataSet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__ChartDataSet.data,
    qt_meta_data_QtCharts__ChartDataSet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::ChartDataSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::ChartDataSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__ChartDataSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::ChartDataSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtCharts::ChartDataSet::axisAdded(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::ChartDataSet::axisRemoved(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::ChartDataSet::seriesAdded(QAbstractSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::ChartDataSet::seriesRemoved(QAbstractSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
