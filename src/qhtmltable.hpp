#ifndef __Q_HTML_TABLE__
#define __Q_HTML_TABLE__

#include "qhtmlelement.hpp"
#include "qhtmlcaption.hpp"

namespace QtHtml {

class QTHTML_EXPORT TableHeader : public Element
{
public:
    enum class Scope {
        Row,
        Col,
        RowGroup,
        ColGroup
    };

    explicit TableHeader(const QString &content = QString());

    TableHeader& setAbbreviation(const QString &value);
    TableHeader& setColSpan(unsigned int value);
    TableHeader& setRowSpan(unsigned int value);
    TableHeader& setHeaders(const QString &value);
    TableHeader& setScope(Scope value);

    TableHeader& operator << (Element& element);
};

class QTHTML_EXPORT TableDataCell : public Element
{
public:
    explicit TableDataCell(const QVariant &content = QString());

    TableDataCell& setColSpan(const unsigned int value);
    TableDataCell& setRowSpan(const unsigned int value);
    TableDataCell& setHeaders(const QString &value);

    TableDataCell& operator << (const Element& element);
};

class QTHTML_EXPORT TableRow : public Element
{
public:
    TableRow();

    TableRow& operator << (Element& element) = delete;
    TableRow& operator << (const TableHeader& col);
    TableRow& operator << (const TableDataCell& col);

    TableRow& setStyle(const QString& value);
};

class QTHTML_EXPORT TableHead : public Element
{
public:
    TableHead();

    TableHead& operator << (Element& element) = delete;
    TableHead& operator << (const TableRow& row);
};

class QTHTML_EXPORT TableFooter : public Element
{
public:
    TableFooter();

    TableFooter& operator << (Element& element) = delete;
    TableFooter& operator << (const TableRow& row);
};

class QTHTML_EXPORT TableBody : public Element
{
public:
    TableBody();

    TableBody& operator << (Element& element) = delete;
    TableBody& operator << (const TableRow& row);
};

class QTHTML_EXPORT Table : public Element
{
public:
    Table();

    Table& operator << (Element& element) = delete;

    Table &operator << (const TableBody &body);
    Table &operator << (const TableHead &head);
    Table &operator << (const TableFooter &footer);
    Table& operator << (const TableRow& row);
    Table& operator << (const Caption& caption);
};

}

#endif // #ifndef __Q_HTML_TABLE__
