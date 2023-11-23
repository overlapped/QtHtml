#ifndef __Q_HTML_DOCUMENT__
#define __Q_HTML_DOCUMENT__

#include "qhtmlelement.hpp"
#include "qhtmlhead.hpp"
#include "qhtmlbody.hpp"

namespace QtHtml {

class Document : public Element
{
public:
    Document();
    explicit Document(const QString& title);
    explicit Document(const QString& title, const Style& style);

    Head& head();
    Body& body();

    QString toString() const;

    Document& operator << (const Element& element);

    void setLang(const QString& value);

    friend QTextStream& operator << (QTextStream& ostream, const Document& element);

private:
    QTextStream& toString(QTextStream& ostream) const;
    Head& head_;
    Body& body_;
};

QTextStream& operator << (QTextStream& ostream, const QtHtml::Document& element);

}

#endif // #ifndef __Q_HTML_DOCUMENT__
