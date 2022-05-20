/****************************************************************************
** Meta object code from reading C++ file 'PlotCustomizerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../PlotCustomizerDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotCustomizerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotCustomizerDialog_t {
    const uint offsetsAndSize[14];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PlotCustomizerDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PlotCustomizerDialog_t qt_meta_stringdata_PlotCustomizerDialog = {
    {
QT_MOC_LITERAL(0, 20), // "PlotCustomizerDialog"
QT_MOC_LITERAL(21, 14), // "setGraphsColor"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 18), // "setGraphsLineStyle"
QT_MOC_LITERAL(56, 22), // "setGraphsLineThickness"
QT_MOC_LITERAL(79, 8), // "setBrush"
QT_MOC_LITERAL(88, 11) // "removeBrush"

    },
    "PlotCustomizerDialog\0setGraphsColor\0"
    "\0setGraphsLineStyle\0setGraphsLineThickness\0"
    "setBrush\0removeBrush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotCustomizerDialog[] = {

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

void PlotCustomizerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotCustomizerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setGraphsColor(); break;
        case 1: _t->setGraphsLineStyle(); break;
        case 2: _t->setGraphsLineThickness(); break;
        case 3: _t->setBrush(); break;
        case 4: _t->removeBrush(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject PlotCustomizerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PlotCustomizerDialog.offsetsAndSize,
    qt_meta_data_PlotCustomizerDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PlotCustomizerDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PlotCustomizerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotCustomizerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotCustomizerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlotCustomizerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
