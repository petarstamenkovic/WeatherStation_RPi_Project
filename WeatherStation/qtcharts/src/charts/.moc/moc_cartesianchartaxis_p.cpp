/****************************************************************************
** Meta object code from reading C++ file 'cartesianchartaxis_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/cartesianchartaxis_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cartesianchartaxis_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__CartesianChartAxis_t {
    QByteArrayData data[13];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__CartesianChartAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__CartesianChartAxis_t qt_meta_stringdata_QtCharts__CartesianChartAxis = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QtCharts::CartesianChartAxis"
QT_MOC_LITERAL(1, 29, 21), // "handleArrowPenChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 3), // "pen"
QT_MOC_LITERAL(4, 56, 20), // "handleGridPenChanged"
QT_MOC_LITERAL(5, 77, 24), // "handleShadesBrushChanged"
QT_MOC_LITERAL(6, 102, 5), // "brush"
QT_MOC_LITERAL(7, 108, 22), // "handleShadesPenChanged"
QT_MOC_LITERAL(8, 131, 26), // "handleMinorArrowPenChanged"
QT_MOC_LITERAL(9, 158, 25), // "handleMinorGridPenChanged"
QT_MOC_LITERAL(10, 184, 26), // "handleGridLineColorChanged"
QT_MOC_LITERAL(11, 211, 5), // "color"
QT_MOC_LITERAL(12, 217, 31) // "handleMinorGridLineColorChanged"

    },
    "QtCharts::CartesianChartAxis\0"
    "handleArrowPenChanged\0\0pen\0"
    "handleGridPenChanged\0handleShadesBrushChanged\0"
    "brush\0handleShadesPenChanged\0"
    "handleMinorArrowPenChanged\0"
    "handleMinorGridPenChanged\0"
    "handleGridLineColorChanged\0color\0"
    "handleMinorGridLineColorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__CartesianChartAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QBrush,    6,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::QColor,   11,

       0        // eod
};

void QtCharts::CartesianChartAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CartesianChartAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleArrowPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 1: _t->handleGridPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 2: _t->handleShadesBrushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 3: _t->handleShadesPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 4: _t->handleMinorArrowPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 5: _t->handleMinorGridPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 6: _t->handleGridLineColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->handleMinorGridLineColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::CartesianChartAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<ChartAxisElement::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__CartesianChartAxis.data,
    qt_meta_data_QtCharts__CartesianChartAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::CartesianChartAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::CartesianChartAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__CartesianChartAxis.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(this);
    return ChartAxisElement::qt_metacast(_clname);
}

int QtCharts::CartesianChartAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartAxisElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
