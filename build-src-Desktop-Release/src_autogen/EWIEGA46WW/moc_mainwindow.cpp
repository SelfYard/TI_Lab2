/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../TI_Lab2/src/mainwindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[14];
    char stringdata5[16];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[19];
    char stringdata9[6];
    char stringdata10[15];
    char stringdata11[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 13),  // "loadPlainText"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 14),  // "loadCipherText"
        QT_MOC_LITERAL(41, 13),  // "startAnalysis"
        QT_MOC_LITERAL(55, 15),  // "handleLFSRFound"
        QT_MOC_LITERAL(71, 11),  // "QList<bool>"
        QT_MOC_LITERAL(83, 6),  // "result"
        QT_MOC_LITERAL(90, 18),  // "handleSearchFailed"
        QT_MOC_LITERAL(109, 5),  // "error"
        QT_MOC_LITERAL(115, 14),  // "updateProgress"
        QT_MOC_LITERAL(130, 5)   // "value"
    },
    "MainWindow",
    "loadPlainText",
    "",
    "loadCipherText",
    "startAnalysis",
    "handleLFSRFound",
    "QList<bool>",
    "result",
    "handleSearchFailed",
    "error",
    "updateProgress",
    "value"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    1,   53,    2, 0x08,    4 /* Private */,
       8,    1,   56,    2, 0x08,    6 /* Private */,
      10,    1,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'loadPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadCipherText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startAnalysis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleLFSRFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<bool> &, std::false_type>,
        // method 'handleSearchFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadPlainText(); break;
        case 1: _t->loadCipherText(); break;
        case 2: _t->startAnalysis(); break;
        case 3: _t->handleLFSRFound((*reinterpret_cast< std::add_pointer_t<QList<bool>>>(_a[1]))); break;
        case 4: _t->handleSearchFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
