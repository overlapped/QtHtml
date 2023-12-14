#ifndef __Q_HTML_PRE__
#define __Q_HTML_PRE__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Pre class represents \b pre HTML element.
 *
 * The \<pre\> HTML element represents preformatted text which is to be presented exactly
 * as written in the HTML file. The text is typically rendered using a non-proportional,
 * or monospaced, font. Whitespace inside this element is displayed as written.
 */
class QTHTML_EXPORT Pre : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Pre(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_PRE__
