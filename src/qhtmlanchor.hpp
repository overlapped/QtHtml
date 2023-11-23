#ifndef __Q_HTML_ANCHOR__
#define __Q_HTML_ANCHOR__

#include <QtCore/QUrl>

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Anchor class represents the \b \<a\> HTML element (or anchor element).
 *
 * The Anchor class represents the \b \<a\> HTML element (or anchor element), with
 * its href attribute, creates a hyperlink to web pages, files, email addresses, locations in
 * the same page, or anything else a URL can address.
 * Content within each \<a\> should indicate the link's destination. If the \c href attribute is
 * present, pressing the enter key while focused on the \<a\> element will activate it.
 */
class QTHTML_EXPORT Anchor : public Element
{
public:
    /**
     * \brief Default constructor create the object.
     */
    Anchor();

    /**
     * \brief Default constructor create the object with \c content.
     * \param[in] content - the content.
     */
    explicit Anchor(const QString &content);

    /**
     * \brief Default constructor create the object with \c content.
     * \param[in] content - the content.
     * \param[in] url - the \c href attribute URL.
     */
    explicit Anchor(const QString &content, const QUrl &url = QUrl());


    Anchor& setDownload(const QString &value);

    /**
     * \brief Set the URL that the hyperlink points to. Links are not restricted to HTTP-based URLs — they can use any URL scheme supported by browsers:
     * \param[in] value - the value.
     * \return this object.
     */
    Anchor& setHref(const QUrl &value);

    /**
     * \brief Set the relationship of the linked URL as space-separated link types.
     * \param[in] value - the value.
     * \return this object.
     */
    Anchor& setRel(const QUrl &value);
    Anchor& setTarget(Target value);
};

}

#endif // #ifndef __Q_HTML_ANCHOR__
