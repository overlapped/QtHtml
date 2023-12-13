#ifndef __Q_HTML_STRIKEOUT__
#define __Q_HTML_STRIKEOUT__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Strikeout class represents \b s HTML element.
 *
 * The \<s\> HTML element renders text with a strikethrough, or a line through it.
 * Use the \<s\> element to represent things that are no longer relevant or no longer accurate.
 * However, \<s\> is not appropriate when indicating document edits; for that, use the \<del\> and \<ins\>
 * elements, as appropriate.
 */
class QTHTML_EXPORT Strikeout : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Strikeout(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_STRIKEOUT__
