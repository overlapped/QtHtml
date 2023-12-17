#ifndef __Q_HTML_HEAD__
#define __Q_HTML_HEAD__

#include "qhtmlelement.hpp"
#include "qhtmltitle.hpp"
#include "qhtmlstyle.hpp"
#include "qhtmlmeta.hpp"
#include "qhtmllink.hpp"
#include "qhtmlscript.hpp"

namespace QtHtml {

/**
 * \brief The Head class represents \b head HTML element.
 *
 * The \<head\> HTML element contains machine-readable information (metadata)
 * about the document, like its \b title, \b scripts, and \b style sheets.
 */
class QTHTML_EXPORT Head : public Element
{
public:
    /**
     * \brief Default constructor to create object.
     */
    explicit Head();

    Head& operator << (Element& element) = delete;

    Head& operator << (const Title& title);
    Head& operator << (const Style& style);
    Head& operator << (const Meta& meta);
    Head& operator << (const Link& link);
    Head& operator << (const Script& script);
};

}

#endif // #ifndef __Q_HTML_HEAD__
