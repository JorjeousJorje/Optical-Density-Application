/****************************************************************************
** Meta object code from reading C++ file 'AvailablePlotsSubMenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AvailablePlotsSubMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvailablePlotsSubMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvailablePlotsSubMenu_t {
    const uint offsetsAndSize[34];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AvailablePlotsSubMenu_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AvailablePlotsSubMenu_t qt_meta_stringdata_AvailablePlotsSubMenu = {
    {
QT_MOC_LITERAL(0, 21), // "AvailablePlotsSubMenu"
QT_MOC_LITERAL(22, 17), // "emitParingMessage"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 24), // "loadExperimentalSpectrum"
QT_MOC_LITERAL(66, 11), // "setAxisFlag"
QT_MOC_LITERAL(78, 13), // "plotAllGraphs"
QT_MOC_LITERAL(92, 15), // "plotEpsilonReal"
QT_MOC_LITERAL(108, 15), // "plotEpsilonImag"
QT_MOC_LITERAL(124, 23), // "plotRealRefractiveIndex"
QT_MOC_LITERAL(148, 28), // "plotImaginaryRefractiveIndex"
QT_MOC_LITERAL(177, 28), // "plotReflectiveCoefficientR12"
QT_MOC_LITERAL(206, 9), // "plotPhase"
QT_MOC_LITERAL(216, 21), // "AbsorptionCoefficient"
QT_MOC_LITERAL(238, 32), // "plotOpticalDensityNoInterference"
QT_MOC_LITERAL(271, 20), // "plotFilmTransmission"
QT_MOC_LITERAL(292, 18), // "plotOpticalDensity"
QT_MOC_LITERAL(311, 24) // "plotExperimentalSpectrum"

    },
    "AvailablePlotsSubMenu\0emitParingMessage\0"
    "\0loadExperimentalSpectrum\0setAxisFlag\0"
    "plotAllGraphs\0plotEpsilonReal\0"
    "plotEpsilonImag\0plotRealRefractiveIndex\0"
    "plotImaginaryRefractiveIndex\0"
    "plotReflectiveCoefficientR12\0plotPhase\0"
    "AbsorptionCoefficient\0"
    "plotOpticalDensityNoInterference\0"
    "plotFilmTransmission\0plotOpticalDensity\0"
    "plotExperimentalSpectrum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvailablePlotsSubMenu[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  104,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  109,    2, 0x0a,    3 /* Public */,
       4,    0,  112,    2, 0x0a,    5 /* Public */,
       5,    0,  113,    2, 0x0a,    6 /* Public */,
       6,    0,  114,    2, 0x0a,    7 /* Public */,
       7,    0,  115,    2, 0x0a,    8 /* Public */,
       8,    0,  116,    2, 0x0a,    9 /* Public */,
       9,    0,  117,    2, 0x0a,   10 /* Public */,
      10,    0,  118,    2, 0x0a,   11 /* Public */,
      11,    0,  119,    2, 0x0a,   12 /* Public */,
      12,    0,  120,    2, 0x0a,   13 /* Public */,
      13,    0,  121,    2, 0x0a,   14 /* Public */,
      14,    0,  122,    2, 0x0a,   15 /* Public */,
      15,    0,  123,    2, 0x0a,   16 /* Public */,
      16,    0,  124,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AvailablePlotsSubMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvailablePlotsSubMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitParingMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->loadExperimentalSpectrum((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setAxisFlag(); break;
        case 3: _t->plotAllGraphs(); break;
        case 4: _t->plotEpsilonReal(); break;
        case 5: _t->plotEpsilonImag(); break;
        case 6: _t->plotRealRefractiveIndex(); break;
        case 7: _t->plotImaginaryRefractiveIndex(); break;
        case 8: _t->plotReflectiveCoefficientR12(); break;
        case 9: _t->plotPhase(); break;
        case 10: _t->AbsorptionCoefficient(); break;
        case 11: _t->plotOpticalDensityNoInterference(); break;
        case 12: _t->plotFilmTransmission(); break;
        case 13: _t->plotOpticalDensity(); break;
        case 14: _t->plotExperimentalSpectrum(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvailablePlotsSubMenu::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvailablePlotsSubMenu::emitParingMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AvailablePlotsSubMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<SubMenu::staticMetaObject>(),
    qt_meta_stringdata_AvailablePlotsSubMenu.offsetsAndSize,
    qt_meta_data_AvailablePlotsSubMenu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AvailablePlotsSubMenu_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AvailablePlotsSubMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvailablePlotsSubMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvailablePlotsSubMenu.stringdata0))
        return static_cast<void*>(this);
    return SubMenu::qt_metacast(_clname);
}

int AvailablePlotsSubMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AvailablePlotsSubMenu::emitParingMessage(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
