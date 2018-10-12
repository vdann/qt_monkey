#pragma once

#include <functional>
#include <string>

#include <QtCore/QString>

#include "qtmonkey_lib_global.h"

namespace json11
{
class string_view;
}

namespace qt_monkey_app
{
QTMONKEY_LIB_EXPORT std::string createPacketFromUserAppEvent(const QString &scriptLines);
QTMONKEY_LIB_EXPORT std::string createPacketFromUserAppOutput(const QString &stdOutLines);
QTMONKEY_LIB_EXPORT std::string createPacketFromUserAppErrors(const QString &errOut);
QTMONKEY_LIB_EXPORT std::string createPacketFromScriptEnd();
QTMONKEY_LIB_EXPORT std::string createPacketFromUserAppScriptLog(const QString &logMsg);
QTMONKEY_LIB_EXPORT std::string createPacketFromRunScript(const QString &script,
                                      const QString &scriptFileName);

QTMONKEY_LIB_EXPORT void parseOutputFromGui(
    const json11::string_view &data, size_t &parserStopPos,
    const std::function<void(QString, QString)> &onRunScript,
    const std::function<void(QString)> &onParseError);

QTMONKEY_LIB_EXPORT void parseOutputFromMonkeyApp(
    const json11::string_view &data, size_t &stopPos,
    const std::function<void(QString)> &onNewUserAppEvent,
    const std::function<void(QString)> &onUserAppError,
    const std::function<void()> &onScriptEnd,
    const std::function<void(QString)> &onScriptLog,
    const std::function<void(QString)> &onParseError);
} // namespace qt_monkey_app
