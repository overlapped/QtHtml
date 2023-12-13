#ifndef __Q_HTML_SPAN__
#define __Q_HTML_SPAN__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Span class represents \b span HTML element.
 *
 * The \<span\> HTML element is a generic inline container for phrasing content, which does
 * not inherently represent anything. It can be used to group elements for styling purposes
 * (using the class or id attributes), or because they share attribute values, such as lang.
 * It should be used only when no other semantic element is appropriate. \<span\> is very much
 * like a \<div\> element, but \<div\> is a block-level element whereas a \<span\> is an
 * inline-level element.
 */
class QTHTML_EXPORT Span : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Span(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_SPAN__
