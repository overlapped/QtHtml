#ifndef __Q_HTML_MARK__
#define __Q_HTML_MARK__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Mark class represents \b mark HTML element.
 *
 * The \<mark\> HTML element represents text which is marked or highlighted for
 * reference or notation purposes due to the marked passage's relevance in the enclosing context.
 */
class QTHTML_EXPORT Mark : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the text string.
     */
    explicit Mark(const QString& content = QString());
};

}

#endif // #ifndef __Q_HTML_MARK__
