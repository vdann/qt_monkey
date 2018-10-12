#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QTMONKEY_LIB_LIB)
#  define QTMONKEY_LIB_EXPORT Q_DECL_EXPORT
# else
#  define QTMONKEY_LIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define QTMONKEY_LIB_EXPORT
#endif
