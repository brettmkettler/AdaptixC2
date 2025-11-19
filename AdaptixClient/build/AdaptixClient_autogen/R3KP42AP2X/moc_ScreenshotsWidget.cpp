/****************************************************************************
** Meta object code from reading C++ file 'ScreenshotsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Headers/UI/Widgets/ScreenshotsWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenshotsWidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10ImageFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto ImageFrame::qt_create_metaobjectdata<qt_meta_tag_ZN10ImageFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ImageFrame",
        "resizeImage",
        "",
        "setPixmap"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'resizeImage'
        QtMocHelpers::SlotData<void() const>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPixmap'
        QtMocHelpers::SlotData<void(const QPixmap &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPixmap, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ImageFrame, qt_meta_tag_ZN10ImageFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ImageFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ImageFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ImageFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ImageFrameE_t>.metaTypes,
    nullptr
} };

void ImageFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ImageFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resizeImage(); break;
        case 1: _t->setPixmap((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ImageFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ImageFrameE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN17ScreenshotsWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto ScreenshotsWidget::qt_create_metaobjectdata<qt_meta_tag_ZN17ScreenshotsWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScreenshotsWidget",
        "onTableItemSelection",
        "",
        "QModelIndex",
        "current",
        "previous",
        "handleScreenshotsMenu",
        "pos",
        "actionDelete",
        "actionNote",
        "actionDownload"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onTableItemSelection'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Slot 'handleScreenshotsMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 7 },
        }}),
        // Slot 'actionDelete'
        QtMocHelpers::SlotData<void() const>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'actionNote'
        QtMocHelpers::SlotData<void() const>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'actionDownload'
        QtMocHelpers::SlotData<void() const>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenshotsWidget, qt_meta_tag_ZN17ScreenshotsWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScreenshotsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DockTab::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenshotsWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenshotsWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ScreenshotsWidgetE_t>.metaTypes,
    nullptr
} };

void ScreenshotsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenshotsWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onTableItemSelection((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->handleScreenshotsMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->actionDelete(); break;
        case 3: _t->actionNote(); break;
        case 4: _t->actionDownload(); break;
        default: ;
        }
    }
}

const QMetaObject *ScreenshotsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenshotsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenshotsWidgetE_t>.strings))
        return static_cast<void*>(this);
    return DockTab::qt_metacast(_clname);
}

int ScreenshotsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
