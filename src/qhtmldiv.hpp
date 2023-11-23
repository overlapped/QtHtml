#ifndef __Q_HTML_DIV__
#define __Q_HTML_DIV__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Div : public Element
{
public:
    Div();
    explicit Div(const QString &classStyle);
};

}

#endif // #ifndef __Q_HTML_DIV__
