#ifndef __Q_HTML_MAIN__
#define __Q_HTML_MAIN__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Main class represents \b main HTML element.
 *
 * The \<main\> HTML element represents the dominant content of the \<body\> of a document.
 * The main content area consists of content that is directly related to or expands upon
 * the central topic of a document, or the central functionality of an application.
 */
class QTHTML_EXPORT Main : public Element
{
public:
    /**
     * \brief Default constructor to create object.
     */
    explicit Main();
};

}

#endif // #ifndef __Q_HTML_MAIN__
