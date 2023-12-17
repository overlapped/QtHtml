#ifndef __Q_HTML_FOOTER__
#define __Q_HTML_FOOTER__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * @brief The Footer class
 *
 * The \<footer\> HTML element represents a footer for its nearest ancestor sectioning
 * content or sectioning root element. A \<footer\> typically contains information about
 * the author of the section, copyright data or links to related documents.
 */
class QTHTML_EXPORT Footer : public Element
{
public:
    /**
     * \brief Default constructor to create object.
     */
    explicit Footer();
};

}

#endif // #ifndef __Q_HTML_FOOTER__
