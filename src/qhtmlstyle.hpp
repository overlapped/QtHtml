#ifndef __Q_HTML_STYLE__
#define __Q_HTML_STYLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Style class represents \b style HTML element.
 *
 * The \<style\> HTML element contains style information for a document, or part of a document.
 * It contains CSS, which is applied to the contents of the document containing the \<style\> element.
 * The \<style\> element must be included inside the \<head\> of the document. In general, it is better
 * to put your styles in external stylesheets and apply them using \<link\> elements.
 */
class QTHTML_EXPORT Style : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Style(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_STYLE__
