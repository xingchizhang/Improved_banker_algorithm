/****************************************************************************
** Meta object code from reading C++ file 'MainWindow1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainWindow1.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow1_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[12];
    char stringdata6[2];
    char stringdata7[2];
    char stringdata8[11];
    char stringdata9[5];
    char stringdata10[14];
    char stringdata11[6];
    char stringdata12[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow1_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow1_t qt_meta_stringdata_MainWindow1 = {
    {
        QT_MOC_LITERAL(0, 11),  // "MainWindow1"
        QT_MOC_LITERAL(12, 8),  // "sendExit"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "sendStart"
        QT_MOC_LITERAL(32, 6),  // "method"
        QT_MOC_LITERAL(39, 11),  // "receiveData"
        QT_MOC_LITERAL(51, 1),  // "a"
        QT_MOC_LITERAL(53, 1),  // "b"
        QT_MOC_LITERAL(55, 10),  // "RequestSet"
        QT_MOC_LITERAL(66, 4),  // "Exit"
        QT_MOC_LITERAL(71, 13),  // "RequestRandom"
        QT_MOC_LITERAL(85, 5),  // "Start"
        QT_MOC_LITERAL(91, 12)   // "receiveExit2"
    },
    "MainWindow1",
    "sendExit",
    "",
    "sendStart",
    "method",
    "receiveData",
    "a",
    "b",
    "RequestSet",
    "Exit",
    "RequestRandom",
    "Start",
    "receiveExit2"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow1[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    1,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   66,    2, 0x08,    4 /* Private */,
       8,    0,   71,    2, 0x08,    7 /* Private */,
       9,    0,   72,    2, 0x08,    8 /* Private */,
      10,    0,   73,    2, 0x08,    9 /* Private */,
      11,    0,   74,    2, 0x08,   10 /* Private */,
      12,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow1::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow1.offsetsAndSizes,
    qt_meta_data_MainWindow1,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow1_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow1, std::true_type>,
        // method 'sendExit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<method, std::false_type>,
        // method 'receiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'RequestSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RequestRandom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveExit2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendExit(); break;
        case 1: _t->sendStart((*reinterpret_cast< std::add_pointer_t<method>>(_a[1]))); break;
        case 2: _t->receiveData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->RequestSet(); break;
        case 4: _t->Exit(); break;
        case 5: _t->RequestRandom(); break;
        case 6: _t->Start(); break;
        case 7: _t->receiveExit2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow1::*)();
            if (_t _q_method = &MainWindow1::sendExit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow1::*)(method );
            if (_t _q_method = &MainWindow1::sendStart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MainWindow1::sendExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow1::sendStart(method _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
