#ifndef __Q_HTML_SPAN__
#define __Q_HTML_SPAN__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Span : public Element
{
public:
    explicit Span(const QString &content);
};

}

#endif // #ifndef __Q_HTML_SPAN__
