#ifndef __Q_HTML_PARAGRAPH__
#define __Q_HTML_PARAGRAPH__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Paragraph class represents \b p HTML element.
 *
 * The \<p\> HTML element represents a paragraph. Paragraphs are usually represented
 * in visual media as blocks of text separated from adjacent blocks by blank lines
 * and/or first-line indentation, but HTML paragraphs can be any structural grouping
 * of related content, such as images or form fields.
 */
class QTHTML_EXPORT Paragraph : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Paragraph(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_PARAGRAPH__
