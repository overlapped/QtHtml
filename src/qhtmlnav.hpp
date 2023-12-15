#ifndef __Q_HTML_NAV__
#define __Q_HTML_NAV__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Nav class represents \b nav HTML element.
 *
 * The \<nav\> HTML element represents a section of a page whose purpose is to provide navigation
 * links, either within the current document or to other documents. Common examples of navigation
 * sections are menus, tables of contents, and indexes.
 */
class QTHTML_EXPORT Nav : public Element
{
public:
    Nav();
    explicit Nav(const QString& classStyle);
};

}

#endif // #ifndef __Q_HTML_NAV__
