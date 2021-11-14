/****************************************************************************
** Meta object code from reading C++ file 'OpticalDensityApplication.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../OpticalDensityApplication.h"
#include <QScreen>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OpticalDensityApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpticalDensityApplication_t {
    const uint offsetsAndSize[12];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_OpticalDensityApplication_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_OpticalDensityApplication_t qt_meta_stringdata_OpticalDensityApplication = {
    {
QT_MOC_LITERAL(0, 25), // "OpticalDensityApplication"
QT_MOC_LITERAL(26, 13), // "onLegendClick"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 10), // "QCPLegend*"
QT_MOC_LITERAL(52, 22), // "QCPAbstractLegendItem*"
QT_MOC_LITERAL(75, 12) // "QMouseEvent*"

    },
    "OpticalDensityApplication\0onLegendClick\0"
    "\0QCPLegend*\0QCPAbstractLegendItem*\0"
    "QMouseEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpticalDensityApplication[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x08,    0 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,

       0        // eod
};

void OpticalDensityApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpticalDensityApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLegendClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLegend* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OpticalDensityApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_OpticalDensityApplication.offsetsAndSize,
    qt_meta_data_OpticalDensityApplication,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_OpticalDensityApplication_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLegend *, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *OpticalDensityApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpticalDensityApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpticalDensityApplication.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int OpticalDensityApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
