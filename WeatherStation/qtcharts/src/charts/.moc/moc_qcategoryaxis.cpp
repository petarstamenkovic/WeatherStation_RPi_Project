/****************************************************************************
** Meta object code from reading C++ file 'qcategoryaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/categoryaxis/qcategoryaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcategoryaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QCategoryAxis_t {
    QByteArrayData data[13];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QCategoryAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QCategoryAxis_t qt_meta_stringdata_QtCharts__QCategoryAxis = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QtCharts::QCategoryAxis"
QT_MOC_LITERAL(1, 24, 17), // "categoriesChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "labelsPositionChanged"
QT_MOC_LITERAL(4, 65, 33), // "QCategoryAxis::AxisLabelsPosi..."
QT_MOC_LITERAL(5, 99, 8), // "position"
QT_MOC_LITERAL(6, 108, 10), // "startValue"
QT_MOC_LITERAL(7, 119, 5), // "count"
QT_MOC_LITERAL(8, 125, 16), // "categoriesLabels"
QT_MOC_LITERAL(9, 142, 14), // "labelsPosition"
QT_MOC_LITERAL(10, 157, 18), // "AxisLabelsPosition"
QT_MOC_LITERAL(11, 176, 24), // "AxisLabelsPositionCenter"
QT_MOC_LITERAL(12, 201, 25) // "AxisLabelsPositionOnValue"

    },
    "QtCharts::QCategoryAxis\0categoriesChanged\0"
    "\0labelsPositionChanged\0"
    "QCategoryAxis::AxisLabelsPosition\0"
    "position\0startValue\0count\0categoriesLabels\0"
    "labelsPosition\0AxisLabelsPosition\0"
    "AxisLabelsPositionCenter\0"
    "AxisLabelsPositionOnValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QCategoryAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::Int, 0x00095001,
       8, QMetaType::QStringList, 0x00095001,
       9, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   49,

 // enum data: key, value
      11, uint(QtCharts::QCategoryAxis::AxisLabelsPositionCenter),
      12, uint(QtCharts::QCategoryAxis::AxisLabelsPositionOnValue),

       0        // eod
};

void QtCharts::QCategoryAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCategoryAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->categoriesChanged(); break;
        case 1: _t->labelsPositionChanged((*reinterpret_cast< QCategoryAxis::AxisLabelsPosition(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCategoryAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCategoryAxis::categoriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCategoryAxis::*)(QCategoryAxis::AxisLabelsPosition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCategoryAxis::labelsPositionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCategoryAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->startValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->categoriesLabels(); break;
        case 3: *reinterpret_cast< AxisLabelsPosition*>(_v) = _t->labelsPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCategoryAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartValue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setLabelsPosition(*reinterpret_cast< AxisLabelsPosition*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QCategoryAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QValueAxis::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QCategoryAxis.data,
    qt_meta_data_QtCharts__QCategoryAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QCategoryAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QCategoryAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QCategoryAxis.stringdata0))
        return static_cast<void*>(this);
    return QValueAxis::qt_metacast(_clname);
}

int QtCharts::QCategoryAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValueAxis::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void QtCharts::QCategoryAxis::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QCategoryAxis::labelsPositionChanged(QCategoryAxis::AxisLabelsPosition _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
