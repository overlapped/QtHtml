#ifndef __Q_HTML_PARAGRAPH__
#define __Q_HTML_PARAGRAPH__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Paragraph : public Element
{
public:
    explicit Paragraph(const QString &content);
};

}

#endif // #ifndef __Q_HTML_PARAGRAPH__
