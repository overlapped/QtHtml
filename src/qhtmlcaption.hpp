#ifndef __Q_HTML_CAPTION__
#define __Q_HTML_CAPTION__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Caption : public Element
{
public:
    explicit Caption(const QString &content);
};

}

#endif // #ifndef __Q_HTML_CAPTION__
