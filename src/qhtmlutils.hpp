#ifndef __Q_HTML_UTILS__
#define __Q_HTML_UTILS__

#include <QtCore/QUrl>

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Utils
{
public:
    static QString TargetToString(Target value);
    static QString FormMethodToString(FormMethod value);
};

}

#endif // #ifndef __Q_HTML_UTILS__
