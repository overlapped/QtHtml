#ifndef __Q_HTML_BASE__
#define __Q_HTML_BASE__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Base : public Element
{
public:
    Base(const QString &url, Target value);
};

}

#endif // #ifndef __Q_HTML_BASE__
