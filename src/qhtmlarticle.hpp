#ifndef __Q_HTML_ARTICLE__
#define __Q_HTML_ARTICLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Article class represents \b article HTML element.
 *
 * The \<article\> HTML element represents a self-contained composition in a document, page,
 * application, or site, which is intended to be independently distributable or reusable
 * (e.g., in syndication). Examples include: a forum post, a magazine or newspaper article,
 * or a blog entry, a product card, a user-submitted comment, an interactive widget or gadget,
 * or any other independent item of content.
 */
class QTHTML_EXPORT Article : public Element
{
public:
    Article();
};

}

#endif // #ifndef __Q_HTML_ARTICLE__
