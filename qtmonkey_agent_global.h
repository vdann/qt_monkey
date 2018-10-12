#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QTMONKEY_AGENT_LIB)
#  define QTMONKEY_AGENT_EXPORT Q_DECL_EXPORT
# else
#  define QTMONKEY_AGENT_EXPORT Q_DECL_IMPORT
# endif
#else
# define QTMONKEY_AGENT_EXPORT
#endif
