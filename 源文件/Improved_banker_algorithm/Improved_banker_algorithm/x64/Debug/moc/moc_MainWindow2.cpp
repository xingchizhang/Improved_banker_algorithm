/****************************************************************************
** Meta object code from reading C++ file 'MainWindow2.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainWindow2.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow2.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MainWindow2_t {
    uint offsetsAndSizes[16];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[10];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow2_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow2_t qt_meta_stringdata_MainWindow2 = {
    {
        QT_MOC_LITERAL(0, 11),  // "MainWindow2"
        QT_MOC_LITERAL(12, 10),  // "sendStart3"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 6),  // "method"
        QT_MOC_LITERAL(31, 9),  // "sendExit2"
        QT_MOC_LITERAL(41, 12),  // "receiveStart"
        QT_MOC_LITERAL(54, 6),  // "Start3"
        QT_MOC_LITERAL(61, 5)   // "Exit2"
    },
    "MainWindow2",
    "sendStart3",
    "",
    "method",
    "sendExit2",
    "receiveStart",
    "Start3",
    "Exit2"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow2[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    0,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   48,    2, 0x08,    4 /* Private */,
       6,    0,   51,    2, 0x08,    6 /* Private */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow2::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow2.offsetsAndSizes,
    qt_meta_data_MainWindow2,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow2_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow2, std::true_type>,
        // method 'sendStart3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<method, std::false_type>,
        // method 'sendExit2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<method, std::false_type>,
        // method 'Start3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Exit2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendStart3((*reinterpret_cast< std::add_pointer_t<method>>(_a[1]))); break;
        case 1: _t->sendExit2(); break;
        case 2: _t->receiveStart((*reinterpret_cast< std::add_pointer_t<method>>(_a[1]))); break;
        case 3: _t->Start3(); break;
        case 4: _t->Exit2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow2::*)(method );
            if (_t _q_method = &MainWindow2::sendStart3; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow2::*)();
            if (_t _q_method = &MainWindow2::sendExit2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow2.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MainWindow2::sendStart3(method _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow2::sendExit2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
