/****************************************************************************
** Meta object code from reading C++ file 'polarchartaxisangular_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/polarchartaxisangular_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polarchartaxisangular_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__PolarChartAxisAngular_t {
    QByteArrayData data[10];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__PolarChartAxisAngular_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__PolarChartAxisAngular_t qt_meta_stringdata_QtCharts__PolarChartAxisAngular = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtCharts::PolarChartAxisAngular"
QT_MOC_LITERAL(1, 32, 21), // "handleArrowPenChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 3), // "pen"
QT_MOC_LITERAL(4, 59, 20), // "handleGridPenChanged"
QT_MOC_LITERAL(5, 80, 26), // "handleMinorArrowPenChanged"
QT_MOC_LITERAL(6, 107, 25), // "handleMinorGridPenChanged"
QT_MOC_LITERAL(7, 133, 26), // "handleGridLineColorChanged"
QT_MOC_LITERAL(8, 160, 5), // "color"
QT_MOC_LITERAL(9, 166, 31) // "handleMinorGridLineColorChanged"

    },
    "QtCharts::PolarChartAxisAngular\0"
    "handleArrowPenChanged\0\0pen\0"
    "handleGridPenChanged\0handleMinorArrowPenChanged\0"
    "handleMinorGridPenChanged\0"
    "handleGridLineColorChanged\0color\0"
    "handleMinorGridLineColorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__PolarChartAxisAngular[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::QColor,    8,

       0        // eod
};

void QtCharts::PolarChartAxisAngular::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolarChartAxisAngular *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleArrowPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 1: _t->handleGridPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 2: _t->handleMinorArrowPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 3: _t->handleMinorGridPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 4: _t->handleGridLineColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->handleMinorGridLineColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::PolarChartAxisAngular::staticMetaObject = { {
    QMetaObject::SuperData::link<PolarChartAxis::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__PolarChartAxisAngular.data,
    qt_meta_data_QtCharts__PolarChartAxisAngular,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::PolarChartAxisAngular::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::PolarChartAxisAngular::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__PolarChartAxisAngular.stringdata0))
        return static_cast<void*>(this);
    return PolarChartAxis::qt_metacast(_clname);
}

int QtCharts::PolarChartAxisAngular::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PolarChartAxis::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
