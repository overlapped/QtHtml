#ifndef __Q_HTML_ADDRESS__
#define __Q_HTML_ADDRESS__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Address class represents the \b \<address\>HTML element.
 *
 * The Address class represents the \b \<address\>HTML element indicates that the enclosed
 * HTML provides contact information for a person or people, or for an organization.
 */
class QTHTML_EXPORT Address : public Element
{
public:
    /**
     * \brief Default constructor create the object.
     */
    Address();

    /**
     * \brief Default constructor create the object with \c content.
     * \param[in] content - the content.
     */
    explicit Address(const QString &content);
};

}

#endif // #ifndef __Q_HTML_ADDRESS__
