#ifndef __Q_HTML_SECTION__
#define __Q_HTML_SECTION__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Section class represents \b section HTML element.
 *
 * The \<section\> HTML element represents a generic standalone section of a document,
 * which doesn't have a more specific semantic element to represent it. Sections should
 * always have a heading, with very few exceptions.
 *
 * As mentioned above, \<section\> is a generic sectioning element, and should only be
 * used if there isn't a more specific element to represent it. As an example, a navigation
 * menu should be wrapped in a \<nav\> element, but a list of search results or a map display
 * and its controls don't have specific elements, and could be put inside a \<section\>.
 */
class QTHTML_EXPORT Section : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    Section();
};

}

#endif // #ifndef __Q_HTML_SECTION__
