#ifndef __Q_HTML_ANCHOR__
#define __Q_HTML_ANCHOR__

#include <QtCore/QUrl>

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The QHtmlAnchor class represents the \b \<a\> HTML element (or anchor element), with
 * its href attribute, creates a hyperlink to web pages, files, email addresses, locations in
 * the same page, or anything else a URL can address.
 */
class QTHTML_EXPORT QHtmlAnchor : public QHtmlElement
{
public:
    QHtmlAnchor();
    explicit QHtmlAnchor(const QString &content);
    explicit QHtmlAnchor(const QString &content, const QUrl &url = QUrl());

    QHtmlAnchor& setDownload(const QString &value);
    QHtmlAnchor& setHref(const QUrl &value);
    QHtmlAnchor& setRel(const QUrl &value);
    QHtmlAnchor& setTarget(Target value);
};

}

#endif // #ifndef __Q_HTML_ANCHOR__
