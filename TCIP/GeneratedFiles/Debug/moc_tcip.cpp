/****************************************************************************
** Meta object code from reading C++ file 'tcip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCIP_t {
    QByteArrayData data[17];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCIP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCIP_t qt_meta_stringdata_TCIP = {
    {
QT_MOC_LITERAL(0, 0, 4), // "TCIP"
QT_MOC_LITERAL(1, 5, 18), // "pushButton_connect"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "pushButton_IWrite"
QT_MOC_LITERAL(4, 43, 16), // "pushButton_IRead"
QT_MOC_LITERAL(5, 60, 17), // "pushButton_SWrite"
QT_MOC_LITERAL(6, 78, 16), // "pushButton_SRead"
QT_MOC_LITERAL(7, 95, 17), // "pushButton_FWrite"
QT_MOC_LITERAL(8, 113, 16), // "pushButton_FRead"
QT_MOC_LITERAL(9, 130, 20), // "pushButton_CoilWrite"
QT_MOC_LITERAL(10, 151, 19), // "pushButton_CoilRead"
QT_MOC_LITERAL(11, 171, 16), // "pushButton_test1"
QT_MOC_LITERAL(12, 188, 16), // "pushButton_test2"
QT_MOC_LITERAL(13, 205, 16), // "pushButton_Write"
QT_MOC_LITERAL(14, 222, 17), // "pushButton_clear1"
QT_MOC_LITERAL(15, 240, 15), // "pushButton_Read"
QT_MOC_LITERAL(16, 256, 17) // "pushButton_clear2"

    },
    "TCIP\0pushButton_connect\0\0pushButton_IWrite\0"
    "pushButton_IRead\0pushButton_SWrite\0"
    "pushButton_SRead\0pushButton_FWrite\0"
    "pushButton_FRead\0pushButton_CoilWrite\0"
    "pushButton_CoilRead\0pushButton_test1\0"
    "pushButton_test2\0pushButton_Write\0"
    "pushButton_clear1\0pushButton_Read\0"
    "pushButton_clear2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCIP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCIP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCIP *_t = static_cast<TCIP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushButton_connect(); break;
        case 1: _t->pushButton_IWrite(); break;
        case 2: _t->pushButton_IRead(); break;
        case 3: _t->pushButton_SWrite(); break;
        case 4: _t->pushButton_SRead(); break;
        case 5: _t->pushButton_FWrite(); break;
        case 6: _t->pushButton_FRead(); break;
        case 7: _t->pushButton_CoilWrite(); break;
        case 8: _t->pushButton_CoilRead(); break;
        case 9: _t->pushButton_test1(); break;
        case 10: _t->pushButton_test2(); break;
        case 11: _t->pushButton_Write(); break;
        case 12: _t->pushButton_clear1(); break;
        case 13: _t->pushButton_Read(); break;
        case 14: _t->pushButton_clear2(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TCIP::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TCIP.data,
      qt_meta_data_TCIP,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TCIP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCIP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCIP.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TCIP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
