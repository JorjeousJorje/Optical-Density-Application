/****************************************************************************
** Meta object code from reading C++ file 'AxisModifier.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AxisModifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AxisModifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AxisModifier_t {
    const uint offsetsAndSize[14];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AxisModifier_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AxisModifier_t qt_meta_stringdata_AxisModifier = {
    {
QT_MOC_LITERAL(0, 12), // "AxisModifier"
QT_MOC_LITERAL(13, 11), // "rescaleAxes"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 13), // "yAxisLogScale"
QT_MOC_LITERAL(40, 16), // "yAxisLinearScale"
QT_MOC_LITERAL(57, 22), // "removeAllAxisExceptOne"
QT_MOC_LITERAL(80, 24) // "addAxisForSelectedGraphs"

    },
    "AxisModifier\0rescaleAxes\0\0yAxisLogScale\0"
    "yAxisLinearScale\0removeAllAxisExceptOne\0"
    "addAxisForSelectedGraphs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AxisModifier[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    0 /* Public */,
       3,    0,   45,    2, 0x0a,    1 /* Public */,
       4,    0,   46,    2, 0x0a,    2 /* Public */,
       5,    0,   47,    2, 0x0a,    3 /* Public */,
       6,    0,   48,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AxisModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AxisModifier *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rescaleAxes(); break;
        case 1: _t->yAxisLogScale(); break;
        case 2: _t->yAxisLinearScale(); break;
        case 3: _t->removeAllAxisExceptOne(); break;
        case 4: _t->addAxisForSelectedGraphs(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject AxisModifier::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AxisModifier.offsetsAndSize,
    qt_meta_data_AxisModifier,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AxisModifier_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AxisModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AxisModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AxisModifier.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AxisModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
