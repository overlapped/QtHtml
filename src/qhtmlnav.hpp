#ifndef __Q_HTML_NAV__
#define __Q_HTML_NAV__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Nav : public Element
{
public:
    Nav();
    explicit Nav(const QString& classStyle);
};

}

#endif // #ifndef __Q_HTML_NAV__
