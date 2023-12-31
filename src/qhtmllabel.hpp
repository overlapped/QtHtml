#ifndef __Q_HTML_LABEL__
#define __Q_HTML_LABEL__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Label : public Element
{
public:
    explicit Label(const QString& control, const QString &content);
};

}

#endif // #ifndef __Q_HTML_LABEL__
