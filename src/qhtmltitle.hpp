#ifndef __Q_HTML_TITLE__
#define __Q_HTML_TITLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Title : public Element
{
public:
    explicit Title(const QString &content);
};

}

#endif // #ifndef __Q_HTML_TITLE__
