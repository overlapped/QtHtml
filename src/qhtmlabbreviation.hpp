#ifndef __Q_HTML_ABBREVIATION__
#define __Q_HTML_ABBREVIATION__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlAbbreviation : public QHtmlElement
{
public:
    QHtmlAbbreviation();
    explicit QHtmlAbbreviation(const QString &content);
};

#endif // #ifndef __Q_HTML_ABBREVIATION__
