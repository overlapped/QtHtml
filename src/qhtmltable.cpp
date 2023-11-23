#include "qhtmldefines.hpp"
#include "qhtmltable.hpp"

namespace QtHtml {

TableRow::TableRow() : Element(HTML_TAG_TABLE_ROW, QVariant())
{

}

TableRow& TableRow::operator << (const TableHeader& col)
{
    children_.append(col);
    return *this;
}

TableRow& TableRow::operator << (const TableDataCell& col)
{
    children_.append(col);
    return *this;
}

TableRow& TableRow::setStyle(const QString& value)
{
    Element::setStyle(value);
    return *this;
}

QString ScopeToString(TableHeader::Scope value)
{
    QString result;

    switch (value) {
        case TableHeader::Scope::Row: result = "row"; break;
        case TableHeader::Scope::Col: result = "col"; break;
        case TableHeader::Scope::RowGroup: result = "rowgroup"; break;
        case TableHeader::Scope::ColGroup: result = "colgroup"; break;
        default:
            break;
    }

    return result;
}

TableHeader::TableHeader(const QString &content) : Element(HTML_TAG_TABLE_HEADER, content)
{

}

TableHeader &TableHeader::setAbbreviation(const QString &value)
{
    addAttribute("abbr", value);
    return *this;
}

TableHeader &TableHeader::setColSpan(unsigned int value)
{
    addAttribute("colspan", value);
    return *this;
}

TableHeader &TableHeader::setRowSpan(unsigned int value)
{
    addAttribute("rowspan", value);
    return *this;
}

TableHeader &TableHeader::setHeaders(const QString &value)
{
    addAttribute("headers", value);
    return *this;
}

TableHeader& TableHeader::operator << (Element& element)
{
    children_.append(element);
    return *this;
}

TableHeader &TableHeader::setScope(Scope value)
{
    addAttribute("scope", ScopeToString(value));
    return *this;
}

TableHead::TableHead() : Element(HTML_TAG_TABLE_ROW_HEADER, QVariant())
{

}

TableHead& TableHead::operator << (const TableRow& row)
{
    children_.append(row);
    return *this;
}

TableFooter::TableFooter() : Element(HTML_TAG_TABLE_FOOTER, QVariant())
{

}

TableFooter& TableFooter::operator << (const TableRow &row)
{
    children_.append(row);
    return *this;
}

TableBody& TableBody::operator << (const TableRow &row)
{
    children_.append(row);
    return *this;
}

TableDataCell::TableDataCell(const QVariant &content) : Element(HTML_TAG_TABLE_DATA_CELL, content)
{

}

TableDataCell &TableDataCell::setColSpan(const unsigned int value)
{
    addAttribute("colspan", value);
    return *this;
}

TableDataCell &TableDataCell::setRowSpan(const unsigned int value)
{
    addAttribute("rowspan", value);
    return *this;
}

TableDataCell& TableDataCell::setHeaders(const QString &value)
{
    addAttribute("headers", value);
    return *this;
}

TableDataCell& TableDataCell::operator << (const Element &element)
{
    children_.append(element);
    return *this;
}

TableBody::TableBody() : Element(HTML_TAG_TABLE_BODY, QVariant())
{

}

Table::Table() : Element(HTML_TAG_TABLE, QVariant())
{

}

Table &Table::operator << (const TableBody &body)
{
    children_.append(body);
    return *this;
}

Table &Table::operator << (const TableHead &head)
{
    children_.append(head);
    return *this;
}

Table &Table::operator << (const TableFooter &footer) {
    children_.append(footer);
    return *this;
}


Table& Table::operator << (const TableRow& row)
{
    children_.append(row);
    return *this;
}

Table& Table::operator << (const Caption& caption)
{
    children_.append(caption);
    return *this;
}

}
