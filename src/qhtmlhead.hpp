#ifndef __Q_HTML_HEAD__
#define __Q_HTML_HEAD__

#include "qhtmlelement.hpp"
#include "qhtmltitle.hpp"
#include "qhtmlstyle.hpp"
#include "qhtmlmeta.hpp"
#include "qhtmllink.hpp"

namespace QtHtml {

class QTHTML_EXPORT Head : public Element
{
public:
    Head();

    Head& operator << (Element& element) = delete;

    Head& operator << (const Title& title);
    Head& operator << (const Style& style);
    Head& operator << (const Meta& meta);
    Head& operator << (const Link& link);
};

}

#endif // #ifndef __Q_HTML_HEAD__
