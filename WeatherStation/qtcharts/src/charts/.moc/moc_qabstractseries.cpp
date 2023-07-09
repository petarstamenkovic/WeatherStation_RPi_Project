/****************************************************************************
** Meta object code from reading C++ file 'qabstractseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../qabstractseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QAbstractSeries_t {
    QByteArrayData data[24];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QAbstractSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QAbstractSeries_t qt_meta_stringdata_QtCharts__QAbstractSeries = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QtCharts::QAbstractSeries"
QT_MOC_LITERAL(1, 26, 11), // "nameChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "visibleChanged"
QT_MOC_LITERAL(4, 54, 14), // "opacityChanged"
QT_MOC_LITERAL(5, 69, 16), // "useOpenGLChanged"
QT_MOC_LITERAL(6, 86, 4), // "name"
QT_MOC_LITERAL(7, 91, 7), // "visible"
QT_MOC_LITERAL(8, 99, 7), // "opacity"
QT_MOC_LITERAL(9, 107, 4), // "type"
QT_MOC_LITERAL(10, 112, 10), // "SeriesType"
QT_MOC_LITERAL(11, 123, 9), // "useOpenGL"
QT_MOC_LITERAL(12, 133, 14), // "SeriesTypeLine"
QT_MOC_LITERAL(13, 148, 14), // "SeriesTypeArea"
QT_MOC_LITERAL(14, 163, 13), // "SeriesTypeBar"
QT_MOC_LITERAL(15, 177, 20), // "SeriesTypeStackedBar"
QT_MOC_LITERAL(16, 198, 20), // "SeriesTypePercentBar"
QT_MOC_LITERAL(17, 219, 13), // "SeriesTypePie"
QT_MOC_LITERAL(18, 233, 17), // "SeriesTypeScatter"
QT_MOC_LITERAL(19, 251, 16), // "SeriesTypeSpline"
QT_MOC_LITERAL(20, 268, 23), // "SeriesTypeHorizontalBar"
QT_MOC_LITERAL(21, 292, 30), // "SeriesTypeHorizontalStackedBar"
QT_MOC_LITERAL(22, 323, 30), // "SeriesTypeHorizontalPercentBar"
QT_MOC_LITERAL(23, 354, 17) // "SeriesTypeBoxPlot"

    },
    "QtCharts::QAbstractSeries\0nameChanged\0"
    "\0visibleChanged\0opacityChanged\0"
    "useOpenGLChanged\0name\0visible\0opacity\0"
    "type\0SeriesType\0useOpenGL\0SeriesTypeLine\0"
    "SeriesTypeArea\0SeriesTypeBar\0"
    "SeriesTypeStackedBar\0SeriesTypePercentBar\0"
    "SeriesTypePie\0SeriesTypeScatter\0"
    "SeriesTypeSpline\0SeriesTypeHorizontalBar\0"
    "SeriesTypeHorizontalStackedBar\0"
    "SeriesTypeHorizontalPercentBar\0"
    "SeriesTypeBoxPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QAbstractSeries[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       1,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
       9, 0x80000000 | 10, 0x00095009,
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       3,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,   12,   63,

 // enum data: key, value
      12, uint(QtCharts::QAbstractSeries::SeriesTypeLine),
      13, uint(QtCharts::QAbstractSeries::SeriesTypeArea),
      14, uint(QtCharts::QAbstractSeries::SeriesTypeBar),
      15, uint(QtCharts::QAbstractSeries::SeriesTypeStackedBar),
      16, uint(QtCharts::QAbstractSeries::SeriesTypePercentBar),
      17, uint(QtCharts::QAbstractSeries::SeriesTypePie),
      18, uint(QtCharts::QAbstractSeries::SeriesTypeScatter),
      19, uint(QtCharts::QAbstractSeries::SeriesTypeSpline),
      20, uint(QtCharts::QAbstractSeries::SeriesTypeHorizontalBar),
      21, uint(QtCharts::QAbstractSeries::SeriesTypeHorizontalStackedBar),
      22, uint(QtCharts::QAbstractSeries::SeriesTypeHorizontalPercentBar),
      23, uint(QtCharts::QAbstractSeries::SeriesTypeBoxPlot),

       0        // eod
};

void QtCharts::QAbstractSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractSeries *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->visibleChanged(); break;
        case 2: _t->opacityChanged(); break;
        case 3: _t->useOpenGLChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractSeries::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractSeries::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAbstractSeries::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractSeries::visibleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAbstractSeries::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractSeries::opacityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAbstractSeries::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractSeries::useOpenGLChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAbstractSeries *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        case 3: *reinterpret_cast< SeriesType*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->useOpenGL(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAbstractSeries *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setUseOpenGL(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QAbstractSeries::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QAbstractSeries.data,
    qt_meta_data_QtCharts__QAbstractSeries,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QAbstractSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QAbstractSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QAbstractSeries.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::QAbstractSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QAbstractSeries::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QAbstractSeries::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QAbstractSeries::opacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QAbstractSeries::useOpenGLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
