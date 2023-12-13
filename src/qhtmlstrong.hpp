#ifndef __Q_HTML_STRONG__
#define __Q_HTML_STRONG__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Strong class represents \b strong HTML element.
 *
 * The \<strong\> HTML element indicates that its contents have strong importance, seriousness,
 * or urgency. Browsers typically render the contents in bold type.
 */
class QTHTML_EXPORT Strong : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content and \b date/time.
     * \param[in] content - the text string.
     */
    explicit Strong(const QString &content = QString());
};

}

#endif // #ifndef __Q_HTML_STRONG__
