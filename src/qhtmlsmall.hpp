#ifndef __Q_HTML_SMALL__
#define __Q_HTML_SMALL__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Small class represents \b small HTML element.
 *
 * The \<small\> HTML element represents side-comments and small print, like copyright and legal
 * text, independent of its styled presentation. By default, it renders text within it one font-size
 * smaller, such as from \c small to \c x-small.
 */
class QTHTML_EXPORT Small : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Small(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_SMALL__
