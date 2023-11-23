#ifndef __Q_HTML_TITLE__
#define __Q_HTML_TITLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Title class represents \c title HTML element.
 *
 * The \b \<title\> HTML element defines the document's \c title that is shown in a browser's
 * title bar or a page's tab. It only contains text; tags within the element are ignored.
 */
class QTHTML_EXPORT Title : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the title text string.
     */
    explicit Title(const QString &content);
};

}

#endif // #ifndef __Q_HTML_TITLE__
