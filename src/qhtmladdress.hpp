#ifndef __Q_HTML_ADDRESS__
#define __Q_HTML_ADDRESS__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The QHtmlAddress class represents the \b \<address\>HTML element indicates that the enclosed
 * HTML provides contact information for a person or people, or for an organization.
 */
class QTHTML_EXPORT QHtmlAddress : public QHtmlElement
{
public:
    QHtmlAddress();
    explicit QHtmlAddress(const QString &content);
};

}

#endif // #ifndef __Q_HTML_ADDRESS__
