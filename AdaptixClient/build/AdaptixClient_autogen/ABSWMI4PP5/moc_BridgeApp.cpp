/****************************************************************************
** Meta object code from reading C++ file 'BridgeApp.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Headers/Client/AxScript/BridgeApp.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BridgeApp.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9BridgeAppE_t {};
} // unnamed namespace

template <> constexpr inline auto BridgeApp::qt_create_metaobjectdata<qt_meta_tag_ZN9BridgeAppE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BridgeApp",
        "consoleMessage",
        "",
        "msg",
        "consoleError",
        "engineError",
        "agents",
        "QJSValue",
        "agent_info",
        "id",
        "property",
        "agent_hide",
        "agent_remove",
        "agent_set_color",
        "background",
        "foreground",
        "reset",
        "agent_set_impersonate",
        "impersonate",
        "elevated",
        "agent_set_mark",
        "mark",
        "agent_set_tag",
        "tag",
        "arch",
        "bof_pack",
        "types",
        "args",
        "copy_to_clipboard",
        "text",
        "console_message",
        "message",
        "type",
        "credentials",
        "credentials_add",
        "username",
        "password",
        "realm",
        "storage",
        "host",
        "credentials_add_list",
        "QVariantList",
        "array",
        "create_command",
        "name",
        "description",
        "example",
        "create_commands_group",
        "downloads",
        "execute_alias",
        "cmdline",
        "command",
        "hook",
        "execute_browser",
        "execute_command",
        "file_basename",
        "path",
        "file_exists",
        "file_read",
        "file_write_text",
        "content",
        "append",
        "format_size",
        "size",
        "format_time",
        "format",
        "time",
        "get_commands",
        "hash",
        "algorithm",
        "length",
        "input",
        "ids",
        "interfaces",
        "is64",
        "isactive",
        "isadmin",
        "log",
        "log_error",
        "open_agent_console",
        "open_access_tunnel",
        "socks4",
        "socks5",
        "lportfwd",
        "rportfwd",
        "open_browser_files",
        "open_browser_process",
        "open_remote_terminal",
        "prompt_confirm",
        "title",
        "prompt_open_file",
        "caption",
        "filter",
        "prompt_open_dir",
        "prompt_save_file",
        "filename",
        "random_string",
        "setname",
        "random_int",
        "min",
        "max",
        "register_commands_group",
        "obj",
        "os",
        "listeners",
        "script_import",
        "script_load",
        "script_unload",
        "script_dir",
        "screenshots",
        "show_message",
        "targets",
        "targets_add",
        "computer",
        "domain",
        "address",
        "osDesc",
        "info",
        "alive",
        "targets_add_list",
        "ticks",
        "tunnels",
        "validate_command"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'consoleMessage'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'consoleError'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'engineError'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'agents'
        QtMocHelpers::SlotData<QJSValue() const>(6, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'agent_info'
        QtMocHelpers::SlotData<QJSValue(const QString &, const QString &) const>(8, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'agent_hide'
        QtMocHelpers::SlotData<void(const QJSValue &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 6 },
        }}),
        // Slot 'agent_remove'
        QtMocHelpers::SlotData<void(const QJSValue &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 6 },
        }}),
        // Slot 'agent_set_color'
        QtMocHelpers::SlotData<void(const QJSValue &, const QString &, const QString &, const bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 6 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 }, { QMetaType::Bool, 16 },
        }}),
        // Slot 'agent_set_impersonate'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 18 }, { QMetaType::Bool, 19 },
        }}),
        // Slot 'agent_set_mark'
        QtMocHelpers::SlotData<void(const QJSValue &, const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 6 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'agent_set_tag'
        QtMocHelpers::SlotData<void(const QJSValue &, const QString &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 6 }, { QMetaType::QString, 23 },
        }}),
        // Slot 'arch'
        QtMocHelpers::SlotData<QString(const QString &) const>(24, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'bof_pack'
        QtMocHelpers::SlotData<QString(const QString &, const QJSValue &)>(25, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 26 }, { 0x80000000 | 7, 27 },
        }}),
        // Slot 'copy_to_clipboard'
        QtMocHelpers::SlotData<void(const QString &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'console_message'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 31 }, { QMetaType::QString, 32 }, { QMetaType::QString, 29 },
        }}),
        // Slot 'console_message'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(30, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 31 }, { QMetaType::QString, 32 },
        }}),
        // Slot 'console_message'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(30, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 31 },
        }}),
        // Slot 'credentials'
        QtMocHelpers::SlotData<QJSValue() const>(33, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'credentials_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 }, { QMetaType::QString, 37 }, { QMetaType::QString, 32 },
            { QMetaType::QString, 23 }, { QMetaType::QString, 38 }, { QMetaType::QString, 39 },
        }}),
        // Slot 'credentials_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 }, { QMetaType::QString, 37 }, { QMetaType::QString, 32 },
            { QMetaType::QString, 23 }, { QMetaType::QString, 38 },
        }}),
        // Slot 'credentials_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 }, { QMetaType::QString, 37 }, { QMetaType::QString, 32 },
            { QMetaType::QString, 23 },
        }}),
        // Slot 'credentials_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 }, { QMetaType::QString, 37 }, { QMetaType::QString, 32 },
        }}),
        // Slot 'credentials_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 }, { QMetaType::QString, 37 },
        }}),
        // Slot 'credentials_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 35 }, { QMetaType::QString, 36 },
        }}),
        // Slot 'credentials_add_list'
        QtMocHelpers::SlotData<void(const QVariantList &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'create_command'
        QtMocHelpers::SlotData<QObject *(const QString &, const QString &, const QString &, const QString &)>(43, 2, QMC::AccessPublic, QMetaType::QObjectStar, {{
            { QMetaType::QString, 44 }, { QMetaType::QString, 45 }, { QMetaType::QString, 46 }, { QMetaType::QString, 31 },
        }}),
        // Slot 'create_command'
        QtMocHelpers::SlotData<QObject *(const QString &, const QString &, const QString &)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QObjectStar, {{
            { QMetaType::QString, 44 }, { QMetaType::QString, 45 }, { QMetaType::QString, 46 },
        }}),
        // Slot 'create_command'
        QtMocHelpers::SlotData<QObject *(const QString &, const QString &)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QObjectStar, {{
            { QMetaType::QString, 44 }, { QMetaType::QString, 45 },
        }}),
        // Slot 'create_commands_group'
        QtMocHelpers::SlotData<QObject *(const QString &, const QJSValue &)>(47, 2, QMC::AccessPublic, QMetaType::QObjectStar, {{
            { QMetaType::QString, 44 }, { 0x80000000 | 7, 42 },
        }}),
        // Slot 'downloads'
        QtMocHelpers::SlotData<QJSValue() const>(48, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'execute_alias'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &) const>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 50 }, { QMetaType::QString, 51 }, { QMetaType::QString, 31 },
            { 0x80000000 | 7, 52 },
        }}),
        // Slot 'execute_alias'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &) const>(49, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 50 }, { QMetaType::QString, 51 }, { QMetaType::QString, 31 },
        }}),
        // Slot 'execute_alias'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &) const>(49, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 50 }, { QMetaType::QString, 51 },
        }}),
        // Slot 'execute_browser'
        QtMocHelpers::SlotData<void(const QString &, const QString &) const>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 51 },
        }}),
        // Slot 'execute_command'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QJSValue &) const>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 51 }, { 0x80000000 | 7, 52 },
        }}),
        // Slot 'execute_command'
        QtMocHelpers::SlotData<void(const QString &, const QString &) const>(54, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 51 },
        }}),
        // Slot 'file_basename'
        QtMocHelpers::SlotData<QString(const QString &) const>(55, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'file_exists'
        QtMocHelpers::SlotData<bool(const QString &) const>(57, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'file_read'
        QtMocHelpers::SlotData<QString(QString) const>(58, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'file_write_text'
        QtMocHelpers::SlotData<bool(QString, const QString &, bool) const>(59, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 56 }, { QMetaType::QString, 60 }, { QMetaType::Bool, 61 },
        }}),
        // Slot 'file_write_text'
        QtMocHelpers::SlotData<bool(QString, const QString &) const>(59, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 56 }, { QMetaType::QString, 60 },
        }}),
        // Slot 'format_size'
        QtMocHelpers::SlotData<QString(const int &) const>(62, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 63 },
        }}),
        // Slot 'format_time'
        QtMocHelpers::SlotData<QString(const QString &, const int &) const>(64, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 65 }, { QMetaType::Int, 66 },
        }}),
        // Slot 'get_commands'
        QtMocHelpers::SlotData<QJSValue(const QString &) const>(67, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'hash'
        QtMocHelpers::SlotData<QString(const QString &, int, const QString &)>(68, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 69 }, { QMetaType::Int, 70 }, { QMetaType::QString, 71 },
        }}),
        // Slot 'ids'
        QtMocHelpers::SlotData<QJSValue() const>(72, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'interfaces'
        QtMocHelpers::SlotData<QJSValue() const>(73, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'is64'
        QtMocHelpers::SlotData<bool(const QString &) const>(74, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'isactive'
        QtMocHelpers::SlotData<bool(const QString &) const>(75, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'isadmin'
        QtMocHelpers::SlotData<bool(const QString &) const>(76, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'log'
        QtMocHelpers::SlotData<void(const QString &)>(77, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'log_error'
        QtMocHelpers::SlotData<void(const QString &)>(78, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'open_agent_console'
        QtMocHelpers::SlotData<void(const QString &)>(79, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'open_access_tunnel'
        QtMocHelpers::SlotData<void(const QString &, bool, bool, bool, bool)>(80, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::Bool, 81 }, { QMetaType::Bool, 82 }, { QMetaType::Bool, 83 },
            { QMetaType::Bool, 84 },
        }}),
        // Slot 'open_browser_files'
        QtMocHelpers::SlotData<void(const QString &)>(85, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'open_browser_process'
        QtMocHelpers::SlotData<void(const QString &)>(86, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'open_remote_terminal'
        QtMocHelpers::SlotData<void(const QString &)>(87, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'prompt_confirm'
        QtMocHelpers::SlotData<bool(const QString &, const QString &)>(88, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 29 },
        }}),
        // Slot 'prompt_open_file'
        QtMocHelpers::SlotData<QString(const QString &, const QString &)>(90, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 91 }, { QMetaType::QString, 92 },
        }}),
        // Slot 'prompt_open_file'
        QtMocHelpers::SlotData<QString(const QString &)>(90, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'prompt_open_file'
        QtMocHelpers::SlotData<QString()>(90, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Slot 'prompt_open_dir'
        QtMocHelpers::SlotData<QString(const QString &)>(93, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'prompt_open_dir'
        QtMocHelpers::SlotData<QString()>(93, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Slot 'prompt_save_file'
        QtMocHelpers::SlotData<QString(const QString &, const QString &, const QString &)>(94, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 95 }, { QMetaType::QString, 91 }, { QMetaType::QString, 92 },
        }}),
        // Slot 'prompt_save_file'
        QtMocHelpers::SlotData<QString(const QString &, const QString &)>(94, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 95 }, { QMetaType::QString, 91 },
        }}),
        // Slot 'prompt_save_file'
        QtMocHelpers::SlotData<QString(const QString &)>(94, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 95 },
        }}),
        // Slot 'random_string'
        QtMocHelpers::SlotData<QString(const int, const QString &)>(96, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 70 }, { QMetaType::QString, 97 },
        }}),
        // Slot 'random_int'
        QtMocHelpers::SlotData<int(const int, const int)>(98, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 99 }, { QMetaType::Int, 100 },
        }}),
        // Slot 'register_commands_group'
        QtMocHelpers::SlotData<void(QObject *, const QJSValue &, const QJSValue &, const QJSValue &)>(101, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 102 }, { 0x80000000 | 7, 6 }, { 0x80000000 | 7, 103 }, { 0x80000000 | 7, 104 },
        }}),
        // Slot 'script_import'
        QtMocHelpers::SlotData<void(const QString &)>(105, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'script_load'
        QtMocHelpers::SlotData<void(const QString &)>(106, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'script_unload'
        QtMocHelpers::SlotData<void(const QString &)>(107, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'script_dir'
        QtMocHelpers::SlotData<QString()>(108, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'screenshots'
        QtMocHelpers::SlotData<QJSValue()>(109, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'show_message'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(110, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 89 }, { QMetaType::QString, 29 },
        }}),
        // Slot 'targets'
        QtMocHelpers::SlotData<QJSValue() const>(111, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'targets_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, bool)>(112, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 113 }, { QMetaType::QString, 114 }, { QMetaType::QString, 115 }, { QMetaType::QString, 103 },
            { QMetaType::QString, 116 }, { QMetaType::QString, 23 }, { QMetaType::QString, 117 }, { QMetaType::Bool, 118 },
        }}),
        // Slot 'targets_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)>(112, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 113 }, { QMetaType::QString, 114 }, { QMetaType::QString, 115 }, { QMetaType::QString, 103 },
            { QMetaType::QString, 116 }, { QMetaType::QString, 23 }, { QMetaType::QString, 117 },
        }}),
        // Slot 'targets_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)>(112, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 113 }, { QMetaType::QString, 114 }, { QMetaType::QString, 115 }, { QMetaType::QString, 103 },
            { QMetaType::QString, 116 }, { QMetaType::QString, 23 },
        }}),
        // Slot 'targets_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &)>(112, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 113 }, { QMetaType::QString, 114 }, { QMetaType::QString, 115 }, { QMetaType::QString, 103 },
            { QMetaType::QString, 116 },
        }}),
        // Slot 'targets_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &)>(112, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 113 }, { QMetaType::QString, 114 }, { QMetaType::QString, 115 }, { QMetaType::QString, 103 },
        }}),
        // Slot 'targets_add'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &)>(112, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 113 }, { QMetaType::QString, 114 }, { QMetaType::QString, 115 },
        }}),
        // Slot 'targets_add_list'
        QtMocHelpers::SlotData<void(const QVariantList &)>(119, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'ticks'
        QtMocHelpers::SlotData<int()>(120, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'tunnels'
        QtMocHelpers::SlotData<QJSValue()>(121, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'validate_command'
        QtMocHelpers::SlotData<QJSValue(const QString &, const QString &) const>(122, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 51 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BridgeApp, qt_meta_tag_ZN9BridgeAppE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BridgeApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9BridgeAppE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9BridgeAppE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9BridgeAppE_t>.metaTypes,
    nullptr
} };

void BridgeApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BridgeApp *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->consoleMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->consoleError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->engineError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: { QJSValue _r = _t->agents();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QJSValue _r = _t->agent_info((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->agent_hide((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 6: _t->agent_remove((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 7: _t->agent_set_color((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 8: _t->agent_set_impersonate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 9: _t->agent_set_mark((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->agent_set_tag((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: { QString _r = _t->arch((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->bof_pack((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->copy_to_clipboard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->console_message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 15: _t->console_message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->console_message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: { QJSValue _r = _t->credentials();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->credentials_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 19: _t->credentials_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 20: _t->credentials_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 21: _t->credentials_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 22: _t->credentials_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->credentials_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: _t->credentials_add_list((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 25: { QObject* _r = _t->create_command((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 26: { QObject* _r = _t->create_command((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 27: { QObject* _r = _t->create_command((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 28: { QObject* _r = _t->create_commands_group((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 29: { QJSValue _r = _t->downloads();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->execute_alias((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[5]))); break;
        case 31: _t->execute_alias((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 32: _t->execute_alias((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 33: _t->execute_browser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 34: _t->execute_command((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[3]))); break;
        case 35: _t->execute_command((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 36: { QString _r = _t->file_basename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->file_exists((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->file_read((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->file_write_text((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->file_write_text((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { QString _r = _t->format_size((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 42: { QString _r = _t->format_time((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: { QJSValue _r = _t->get_commands((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 44: { QString _r = _t->hash((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 45: { QJSValue _r = _t->ids();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 46: { QJSValue _r = _t->interfaces();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->is64((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->isactive((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { bool _r = _t->isadmin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->log((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->log_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 52: _t->open_agent_console((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 53: _t->open_access_tunnel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 54: _t->open_browser_files((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 55: _t->open_browser_process((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 56: _t->open_remote_terminal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 57: { bool _r = _t->prompt_confirm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: { QString _r = _t->prompt_open_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 59: { QString _r = _t->prompt_open_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 60: { QString _r = _t->prompt_open_file();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 61: { QString _r = _t->prompt_open_dir((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 62: { QString _r = _t->prompt_open_dir();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { QString _r = _t->prompt_save_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->prompt_save_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: { QString _r = _t->prompt_save_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->random_string((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { int _r = _t->random_int((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->register_commands_group((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[4]))); break;
        case 69: _t->script_import((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 70: _t->script_load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 71: _t->script_unload((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 72: { QString _r = _t->script_dir();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 73: { QJSValue _r = _t->screenshots();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->show_message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 75: { QJSValue _r = _t->targets();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 76: _t->targets_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8]))); break;
        case 77: _t->targets_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 78: _t->targets_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 79: _t->targets_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 80: _t->targets_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 81: _t->targets_add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 82: _t->targets_add_list((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 83: { int _r = _t->ticks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 84: { QJSValue _r = _t->tunnels();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 85: { QJSValue _r = _t->validate_command((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
            case 2:
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BridgeApp::*)(const QString & )>(_a, &BridgeApp::consoleMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BridgeApp::*)(const QString & )>(_a, &BridgeApp::consoleError, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BridgeApp::*)(const QString & )>(_a, &BridgeApp::engineError, 2))
            return;
    }
}

const QMetaObject *BridgeApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BridgeApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9BridgeAppE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BridgeApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
    return _id;
}

// SIGNAL 0
void BridgeApp::consoleMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void BridgeApp::consoleError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void BridgeApp::engineError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
