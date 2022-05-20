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
    const uint offsetsAndSize[26];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_OpticalDensityApplication_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_OpticalDensityApplication_t qt_meta_stringdata_OpticalDensityApplication = {
    {
QT_MOC_LITERAL(0, 25), // "OpticalDensityApplication"
QT_MOC_LITERAL(26, 10), // "moveLegend"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 16), // "selectionChanged"
QT_MOC_LITERAL(55, 26), // "processAxisSynchronization"
QT_MOC_LITERAL(82, 10), // "mousePress"
QT_MOC_LITERAL(93, 12), // "QMouseEvent*"
QT_MOC_LITERAL(106, 10), // "mouseWheel"
QT_MOC_LITERAL(117, 12), // "graphClicked"
QT_MOC_LITERAL(130, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(152, 19), // "removeSelectedGraph"
QT_MOC_LITERAL(172, 15), // "removeAllGraphs"
QT_MOC_LITERAL(188, 17) // "showParsingResult"

    },
    "OpticalDensityApplication\0moveLegend\0"
    "\0selectionChanged\0processAxisSynchronization\0"
    "mousePress\0QMouseEvent*\0mouseWheel\0"
    "graphClicked\0QCPAbstractPlottable*\0"
    "removeSelectedGraph\0removeAllGraphs\0"
    "showParsingResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpticalDensityApplication[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    0 /* Public */,
       3,    0,   69,    2, 0x0a,    1 /* Public */,
       4,    0,   70,    2, 0x0a,    2 /* Public */,
       5,    1,   71,    2, 0x0a,    3 /* Public */,
       7,    0,   74,    2, 0x0a,    5 /* Public */,
       8,    2,   75,    2, 0x0a,    6 /* Public */,
      10,    0,   80,    2, 0x0a,    9 /* Public */,
      11,    0,   81,    2, 0x0a,   10 /* Public */,
      12,    2,   82,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

       0        // eod
};

void OpticalDensityApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpticalDensityApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveLegend(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->processAxisSynchronization(); break;
        case 3: _t->mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseWheel(); break;
        case 5: _t->graphClicked((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->removeSelectedGraph(); break;
        case 7: _t->removeAllGraphs(); break;
        case 8: _t->showParsingResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
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

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractPlottable *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
