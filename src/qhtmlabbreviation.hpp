#ifndef __Q_HTML_ABBREVIATION__
#define __Q_HTML_ABBREVIATION__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The QHtmlAbbreviation class represents an \c abbreviation or \c acronym.
 * When including an abbreviation or acronym, provide a full expansion of the term in plain text on first use,
 * along with the \b \<abbr\> to mark up the abbreviation. This informs the user what the abbreviation or acronym means.
 */
class QTHTML_EXPORT QHtmlAbbreviation : public QHtmlElement
{
public:
    QHtmlAbbreviation();
    explicit QHtmlAbbreviation(const QString &content);
};

}

#endif // #ifndef __Q_HTML_ABBREVIATION__
