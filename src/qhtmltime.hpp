#ifndef __Q_HTML_TIME__
#define __Q_HTML_TIME__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Time : public Element
{
public:
    explicit Time(const QString& datetime, const QString &content);
};

}

#endif // #ifndef __Q_HTML_TIME__
