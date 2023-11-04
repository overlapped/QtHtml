#ifndef QTHTML_GLOBAL_HPP
#define QTHTML_GLOBAL_HPP

#include <QtCore/qglobal.h>

#if defined(QTHTML_LIBRARY)
#  define QTHTML_EXPORT Q_DECL_EXPORT
#else
#  define QTHTML_EXPORT Q_DECL_IMPORT
#endif

#endif // QTHTML_GLOBAL_HPP
