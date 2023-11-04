#ifndef __Q_HTML_UTILS__
#define __Q_HTML_UTILS__

#include <QtCore/QUrl>

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlUtils
{
public:
    static QString TargetToString(QHtmlElement::Target value);
};

#endif // #ifndef __Q_HTML_UTILS__
