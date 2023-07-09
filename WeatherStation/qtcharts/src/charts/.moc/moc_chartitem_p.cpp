/****************************************************************************
** Meta object code from reading C++ file 'chartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../chartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__ChartItem_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__ChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__ChartItem_t qt_meta_stringdata_QtCharts__ChartItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QtCharts::ChartItem"
QT_MOC_LITERAL(1, 20, 19), // "handleDomainUpdated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "reversePainter"
QT_MOC_LITERAL(4, 56, 9), // "QPainter*"
QT_MOC_LITERAL(5, 66, 7), // "painter"
QT_MOC_LITERAL(6, 74, 8), // "clipRect"
QT_MOC_LITERAL(7, 83, 13), // "seriesPrivate"
QT_MOC_LITERAL(8, 97, 23) // "QAbstractSeriesPrivate*"

    },
    "QtCharts::ChartItem\0handleDomainUpdated\0"
    "\0reversePainter\0QPainter*\0painter\0"
    "clipRect\0seriesPrivate\0QAbstractSeriesPrivate*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__ChartItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QRectF,    5,    6,
    0x80000000 | 8,

       0        // eod
};

void QtCharts::ChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChartItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleDomainUpdated(); break;
        case 1: _t->reversePainter((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 2: { QAbstractSeriesPrivate* _r = _t->seriesPrivate();
            if (_a[0]) *reinterpret_cast< QAbstractSeriesPrivate**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::ChartItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ChartElement::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__ChartItem.data,
    qt_meta_data_QtCharts__ChartItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::ChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::ChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__ChartItem.stringdata0))
        return static_cast<void*>(this);
    return ChartElement::qt_metacast(_clname);
}

int QtCharts::ChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
