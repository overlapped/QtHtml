#ifndef __Q_HTML_STYLE__
#define __Q_HTML_STYLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Style : public Element
{
public:
    Style();
    explicit Style(const QString &content);
};

}

#endif // #ifndef __Q_HTML_STYLE__
