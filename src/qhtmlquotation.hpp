#ifndef __Q_HTML_QUOTATION__
#define __Q_HTML_QUOTATION__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Quotation class represents \b q HTML element.
 *
 * The \<q\> HTML element indicates that the enclosed text is a short inline quotation.
 * Most modern browsers implement this by surrounding the text in quotation marks.
 * This element is intended for short quotations that don't require paragraph breaks;
 * for long quotations use the \<blockquote\> element.
 */
class QTHTML_EXPORT Quotation : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Quotation(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_QUOTATION__
