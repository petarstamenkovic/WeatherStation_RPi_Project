/****************************************************************************
** Meta object code from reading C++ file 'abstractbarchartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../barchart/abstractbarchartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractbarchartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__AbstractBarChartItem_t {
    QByteArrayData data[12];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__AbstractBarChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__AbstractBarChartItem_t qt_meta_stringdata_QtCharts__AbstractBarChartItem = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCharts::AbstractBarChartItem"
QT_MOC_LITERAL(1, 31, 19), // "handleDomainUpdated"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 19), // "handleLayoutChanged"
QT_MOC_LITERAL(4, 72, 26), // "handleLabelsVisibleChanged"
QT_MOC_LITERAL(5, 99, 7), // "visible"
QT_MOC_LITERAL(6, 107, 26), // "handleDataStructureChanged"
QT_MOC_LITERAL(7, 134, 20), // "handleVisibleChanged"
QT_MOC_LITERAL(8, 155, 20), // "handleOpacityChanged"
QT_MOC_LITERAL(9, 176, 17), // "handleUpdatedBars"
QT_MOC_LITERAL(10, 194, 27), // "handleLabelsPositionChanged"
QT_MOC_LITERAL(11, 222, 14) // "positionLabels"

    },
    "QtCharts::AbstractBarChartItem\0"
    "handleDomainUpdated\0\0handleLayoutChanged\0"
    "handleLabelsVisibleChanged\0visible\0"
    "handleDataStructureChanged\0"
    "handleVisibleChanged\0handleOpacityChanged\0"
    "handleUpdatedBars\0handleLabelsPositionChanged\0"
    "positionLabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__AbstractBarChartItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::AbstractBarChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractBarChartItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleDomainUpdated(); break;
        case 1: _t->handleLayoutChanged(); break;
        case 2: _t->handleLabelsVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->handleDataStructureChanged(); break;
        case 4: _t->handleVisibleChanged(); break;
        case 5: _t->handleOpacityChanged(); break;
        case 6: _t->handleUpdatedBars(); break;
        case 7: _t->handleLabelsPositionChanged(); break;
        case 8: _t->positionLabels(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::AbstractBarChartItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ChartItem::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__AbstractBarChartItem.data,
    qt_meta_data_QtCharts__AbstractBarChartItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::AbstractBarChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::AbstractBarChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__AbstractBarChartItem.stringdata0))
        return static_cast<void*>(this);
    return ChartItem::qt_metacast(_clname);
}

int QtCharts::AbstractBarChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
