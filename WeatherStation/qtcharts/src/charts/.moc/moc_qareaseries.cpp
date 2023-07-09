/****************************************************************************
** Meta object code from reading C++ file 'qareaseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../areachart/qareaseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qareaseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QAreaSeries_t {
    QByteArrayData data[31];
    char stringdata0[425];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QAreaSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QAreaSeries_t qt_meta_stringdata_QtCharts__QAreaSeries = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtCharts::QAreaSeries"
QT_MOC_LITERAL(1, 22, 7), // "clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "point"
QT_MOC_LITERAL(4, 37, 7), // "hovered"
QT_MOC_LITERAL(5, 45, 5), // "state"
QT_MOC_LITERAL(6, 51, 7), // "pressed"
QT_MOC_LITERAL(7, 59, 8), // "released"
QT_MOC_LITERAL(8, 68, 13), // "doubleClicked"
QT_MOC_LITERAL(9, 82, 8), // "selected"
QT_MOC_LITERAL(10, 91, 12), // "colorChanged"
QT_MOC_LITERAL(11, 104, 5), // "color"
QT_MOC_LITERAL(12, 110, 18), // "borderColorChanged"
QT_MOC_LITERAL(13, 129, 24), // "pointLabelsFormatChanged"
QT_MOC_LITERAL(14, 154, 6), // "format"
QT_MOC_LITERAL(15, 161, 28), // "pointLabelsVisibilityChanged"
QT_MOC_LITERAL(16, 190, 7), // "visible"
QT_MOC_LITERAL(17, 198, 22), // "pointLabelsFontChanged"
QT_MOC_LITERAL(18, 221, 4), // "font"
QT_MOC_LITERAL(19, 226, 23), // "pointLabelsColorChanged"
QT_MOC_LITERAL(20, 250, 26), // "pointLabelsClippingChanged"
QT_MOC_LITERAL(21, 277, 8), // "clipping"
QT_MOC_LITERAL(22, 286, 11), // "upperSeries"
QT_MOC_LITERAL(23, 298, 12), // "QLineSeries*"
QT_MOC_LITERAL(24, 311, 11), // "lowerSeries"
QT_MOC_LITERAL(25, 323, 11), // "borderColor"
QT_MOC_LITERAL(26, 335, 17), // "pointLabelsFormat"
QT_MOC_LITERAL(27, 353, 18), // "pointLabelsVisible"
QT_MOC_LITERAL(28, 372, 15), // "pointLabelsFont"
QT_MOC_LITERAL(29, 388, 16), // "pointLabelsColor"
QT_MOC_LITERAL(30, 405, 19) // "pointLabelsClipping"

    },
    "QtCharts::QAreaSeries\0clicked\0\0point\0"
    "hovered\0state\0pressed\0released\0"
    "doubleClicked\0selected\0colorChanged\0"
    "color\0borderColorChanged\0"
    "pointLabelsFormatChanged\0format\0"
    "pointLabelsVisibilityChanged\0visible\0"
    "pointLabelsFontChanged\0font\0"
    "pointLabelsColorChanged\0"
    "pointLabelsClippingChanged\0clipping\0"
    "upperSeries\0QLineSeries*\0lowerSeries\0"
    "borderColor\0pointLabelsFormat\0"
    "pointLabelsVisible\0pointLabelsFont\0"
    "pointLabelsColor\0pointLabelsClipping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QAreaSeries[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       9,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    2,   82,    2, 0x06 /* Public */,
       6,    1,   87,    2, 0x06 /* Public */,
       7,    1,   90,    2, 0x06 /* Public */,
       8,    1,   93,    2, 0x06 /* Public */,
       9,    0,   96,    2, 0x06 /* Public */,
      10,    1,   97,    2, 0x06 /* Public */,
      12,    1,  100,    2, 0x06 /* Public */,
      13,    1,  103,    2, 0x06 /* Public */,
      15,    1,  106,    2, 0x06 /* Public */,
      17,    1,  109,    2, 0x06 /* Public */,
      19,    1,  112,    2, 0x06 /* Public */,
      20,    1,  115,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Bool,    3,    5,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QFont,   18,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::Bool,   21,

 // properties: name, type, flags
      22, 0x80000000 | 23, 0x00095009,
      24, 0x80000000 | 23, 0x00095009,
      11, QMetaType::QColor, 0x00495103,
      25, QMetaType::QColor, 0x00495103,
      26, QMetaType::QString, 0x00495103,
      27, QMetaType::Bool, 0x00495103,
      28, QMetaType::QFont, 0x00495103,
      29, QMetaType::QColor, 0x00495103,
      30, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       6,
       7,
       8,
       9,
      10,
      11,
      12,

       0        // eod
};

void QtCharts::QAreaSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAreaSeries *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->pressed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 3: _t->released((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->doubleClicked((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 5: _t->selected(); break;
        case 6: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 7: _t->borderColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->pointLabelsFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->pointLabelsVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->pointLabelsFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 11: _t->pointLabelsColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->pointLabelsClippingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAreaSeries::*)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QPointF & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::released)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::doubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::selected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::colorChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::borderColorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::pointLabelsFormatChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::pointLabelsVisibilityChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::pointLabelsFontChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::pointLabelsColorChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QAreaSeries::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAreaSeries::pointLabelsClippingChanged)) {
                *result = 12;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAreaSeries *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QLineSeries**>(_v) = _t->upperSeries(); break;
        case 1: *reinterpret_cast< QLineSeries**>(_v) = _t->lowerSeries(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->pointLabelsFormat(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->pointLabelsVisible(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = _t->pointLabelsFont(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->pointLabelsColor(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->pointLabelsClipping(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAreaSeries *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setPointLabelsFormat(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPointLabelsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setPointLabelsFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: _t->setPointLabelsColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setPointLabelsClipping(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::QAreaSeries::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSeries::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__QAreaSeries.data,
    qt_meta_data_QtCharts__QAreaSeries,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::QAreaSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QAreaSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QAreaSeries.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeries::qt_metacast(_clname);
}

int QtCharts::QAreaSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QAreaSeries::clicked(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::QAreaSeries::hovered(const QPointF & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::QAreaSeries::pressed(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::QAreaSeries::released(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::QAreaSeries::doubleClicked(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::QAreaSeries::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtCharts::QAreaSeries::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtCharts::QAreaSeries::borderColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtCharts::QAreaSeries::pointLabelsFormatChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtCharts::QAreaSeries::pointLabelsVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QtCharts::QAreaSeries::pointLabelsFontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QtCharts::QAreaSeries::pointLabelsColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QtCharts::QAreaSeries::pointLabelsClippingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
