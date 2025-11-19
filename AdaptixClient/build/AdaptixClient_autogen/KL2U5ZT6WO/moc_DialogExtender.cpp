/****************************************************************************
** Meta object code from reading C++ file 'DialogExtender.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Headers/UI/Dialogs/DialogExtender.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogExtender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14DialogExtenderE_t {};
} // unnamed namespace

template <> constexpr inline auto DialogExtender::qt_create_metaobjectdata<qt_meta_tag_ZN14DialogExtenderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DialogExtender",
        "handleMenu",
        "",
        "pos",
        "onActionLoad",
        "onActionReload",
        "onActionEnable",
        "onActionDisable",
        "onActionRemove",
        "onRowSelect",
        "row",
        "column"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'handleMenu'
        QtMocHelpers::SlotData<void(const QPoint &) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 3 },
        }}),
        // Slot 'onActionLoad'
        QtMocHelpers::SlotData<void() const>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActionReload'
        QtMocHelpers::SlotData<void() const>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActionEnable'
        QtMocHelpers::SlotData<void() const>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActionDisable'
        QtMocHelpers::SlotData<void() const>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActionRemove'
        QtMocHelpers::SlotData<void() const>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRowSelect'
        QtMocHelpers::SlotData<void(int, int) const>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DialogExtender, qt_meta_tag_ZN14DialogExtenderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DialogExtender::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DialogExtenderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DialogExtenderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14DialogExtenderE_t>.metaTypes,
    nullptr
} };

void DialogExtender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DialogExtender *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->handleMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->onActionLoad(); break;
        case 2: _t->onActionReload(); break;
        case 3: _t->onActionEnable(); break;
        case 4: _t->onActionDisable(); break;
        case 5: _t->onActionRemove(); break;
        case 6: _t->onRowSelect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *DialogExtender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogExtender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DialogExtenderE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogExtender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
