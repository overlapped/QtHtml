#ifndef __Q_HTML_DOCUMENT__
#define __Q_HTML_DOCUMENT__

#include "qhtmlelement.hpp"
#include "qhtmlhead.hpp"
#include "qhtmlbody.hpp"

namespace QtHtml {

class QHtmlDocument : public QHtmlElement
{
public:
    QHtmlDocument();
    explicit QHtmlDocument(const QString& title);
    explicit QHtmlDocument(const QString& title, const QHtmlStyle& style);

    QHtmlHead& head();
    QHtmlBody& body();

    QString toString() const;

    QHtmlDocument& operator << (const QHtmlElement& element);

    void setLang(const QString& value);

    friend QTextStream& operator << (QTextStream& ostream, const QHtmlDocument& element);

private:
    QTextStream& toString(QTextStream& ostream) const;
    QHtmlHead& head_;
    QHtmlBody& body_;
};

QTextStream& operator << (QTextStream& ostream, const QtHtml::QHtmlDocument& element);

}

#endif // #ifndef __Q_HTML_DOCUMENT__
