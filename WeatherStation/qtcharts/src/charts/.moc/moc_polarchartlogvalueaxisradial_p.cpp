/****************************************************************************
** Meta object code from reading C++ file 'polarchartlogvalueaxisradial_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../axis/logvalueaxis/polarchartlogvalueaxisradial_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polarchartlogvalueaxisradial_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__PolarChartLogValueAxisRadial_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__PolarChartLogValueAxisRadial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__PolarChartLogValueAxisRadial_t qt_meta_stringdata_QtCharts__PolarChartLogValueAxisRadial = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QtCharts::PolarChartLogValueA..."
QT_MOC_LITERAL(1, 39, 17), // "handleBaseChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 4), // "base"
QT_MOC_LITERAL(4, 63, 24), // "handleLabelFormatChanged"
QT_MOC_LITERAL(5, 88, 6) // "format"

    },
    "QtCharts::PolarChartLogValueAxisRadial\0"
    "handleBaseChanged\0\0base\0"
    "handleLabelFormatChanged\0format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__PolarChartLogValueAxisRadial[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void QtCharts::PolarChartLogValueAxisRadial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolarChartLogValueAxisRadial *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleBaseChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->handleLabelFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::PolarChartLogValueAxisRadial::staticMetaObject = { {
    QMetaObject::SuperData::link<PolarChartAxisRadial::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__PolarChartLogValueAxisRadial.data,
    qt_meta_data_QtCharts__PolarChartLogValueAxisRadial,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::PolarChartLogValueAxisRadial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::PolarChartLogValueAxisRadial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__PolarChartLogValueAxisRadial.stringdata0))
        return static_cast<void*>(this);
    return PolarChartAxisRadial::qt_metacast(_clname);
}

int QtCharts::PolarChartLogValueAxisRadial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PolarChartAxisRadial::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
