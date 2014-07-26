#ifndef PDFEXPORT_GLOBAL_H
#define PDFEXPORT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PDFEXPORT_LIBRARY)
#  define PDFEXPORTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PDFEXPORTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PDFEXPORT_GLOBAL_H