#ifndef __Q_HTML_ITALIC__
#define __Q_HTML_ITALIC__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Italic class represents \b i HTML element.
 *
 * The \<i\> HTML element represents a range of text that is set off from the normal text for
 * some reason, such as idiomatic text, technical terms, taxonomical designations, among others.
 * Historically, these have been presented using italicized type, which is the original source
 * of the \<i\> naming of this element.
 */
class QTHTML_EXPORT Italic : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Italic(const QString& content = QString());
};

}

#endif // #ifndef __Q_HTML_ITALIC__
