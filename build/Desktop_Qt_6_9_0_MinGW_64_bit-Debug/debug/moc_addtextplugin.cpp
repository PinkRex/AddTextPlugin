/****************************************************************************
** Meta object code from reading C++ file 'addtextplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addtextplugin.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtextplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
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
struct qt_meta_tag_ZN13AddTextPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto AddTextPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN13AddTextPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AddTextPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AddTextPlugin, qt_meta_tag_ZN13AddTextPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AddTextPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AddTextPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AddTextPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13AddTextPluginE_t>.metaTypes,
    nullptr
} };

void AddTextPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AddTextPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *AddTextPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTextPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AddTextPluginE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PhotoEditorPluginInterface"))
        return static_cast< PhotoEditorPluginInterface*>(this);
    if (!strcmp(_clname, "com.nguyenminhduc.photoeditorplugininterface"))
        return static_cast< PhotoEditorPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int AddTextPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_AddTextPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2c,  'c',  'o',  'm',  '.',  'n', 
    'g',  'u',  'y',  'e',  'n',  'm',  'i',  'n', 
    'h',  'd',  'u',  'c',  '.',  'p',  'h',  'o', 
    't',  'o',  'e',  'd',  'i',  't',  'o',  'r', 
    'p',  'l',  'u',  'g',  'i',  'n',  'i',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x6d,  'A',  'd',  'd',  'T',  'e',  'x', 
    't',  'P',  'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(AddTextPlugin, AddTextPlugin, qt_pluginMetaDataV2_AddTextPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_AddTextPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2c,  'c',  'o',  'm',  '.',  'n', 
    'g',  'u',  'y',  'e',  'n',  'm',  'i',  'n', 
    'h',  'd',  'u',  'c',  '.',  'p',  'h',  'o', 
    't',  'o',  'e',  'd',  'i',  't',  'o',  'r', 
    'p',  'l',  'u',  'g',  'i',  'n',  'i',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x6d,  'A',  'd',  'd',  'T',  'e',  'x', 
    't',  'P',  'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(AddTextPlugin, AddTextPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
