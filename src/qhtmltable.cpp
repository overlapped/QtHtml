#include "qhtmldefines.hpp"
#include "qhtmltable.hpp"

QHtmlTableRow::QHtmlTableRow() : QHtmlElement(HTML_TAG_TABLE_ROW, QVariant())
{

}

QHtmlTableRow& QHtmlTableRow::operator << (const QHtmlTableHeader& col)
{
    children_.append(col);
    return *this;
}

QHtmlTableRow& QHtmlTableRow::operator << (const QHtmlTableDataCell& col)
{
    children_.append(col);
    return *this;
}

QHtmlTableRow& QHtmlTableRow::setStyle(const QString& value)
{
    QHtmlElement::setStyle(value);
    return *this;
}

QString ScopeToString(QHtmlTableHeader::Scope value)
{
    QString result;

    switch (value) {
        case QHtmlTableHeader::Scope::Row: result = "row"; break;
        case QHtmlTableHeader::Scope::Col: result = "col"; break;
        case QHtmlTableHeader::Scope::RowGroup: result = "rowgroup"; break;
        case QHtmlTableHeader::Scope::ColGroup: result = "colgroup"; break;
        default:
            break;
    }

    return result;
}

QHtmlTableHeader::QHtmlTableHeader(const QString &content) : QHtmlElement(HTML_TAG_TABLE_HEADER, content)
{

}

QHtmlTableHeader &QHtmlTableHeader::setAbbreviation(const QString &value)
{
    addAttribute("abbr", value);
    return *this;
}

QHtmlTableHeader &QHtmlTableHeader::setColSpan(unsigned int value)
{
    addAttribute("colspan", value);
    return *this;
}

QHtmlTableHeader &QHtmlTableHeader::setRowSpan(unsigned int value)
{
    addAttribute("rowspan", value);
    return *this;
}

QHtmlTableHeader &QHtmlTableHeader::setHeaders(const QString &value)
{
    addAttribute("headers", value);
    return *this;
}

QHtmlTableHeader& QHtmlTableHeader::operator << (QHtmlElement& element)
{
    children_.append(element);
    return *this;
}

QHtmlTableHeader &QHtmlTableHeader::setScope(Scope value)
{
    addAttribute("scope", ScopeToString(value));
    return *this;
}

QHtmlTableHead::QHtmlTableHead() : QHtmlElement(HTML_TAG_TABLE_ROW_HEADER, QVariant())
{

}

QHtmlTableHead& QHtmlTableHead::operator << (const QHtmlTableRow& row)
{
    children_.append(row);
    return *this;
}

QHtmlTableFooter::QHtmlTableFooter() : QHtmlElement(HTML_TAG_TABLE_FOOTER, QVariant())
{

}

QHtmlTableFooter& QHtmlTableFooter::operator << (const QHtmlTableRow &row)
{
    children_.append(row);
    return *this;
}

QHtmlTableBody& QHtmlTableBody::operator << (const QHtmlTableRow &row)
{
    children_.append(row);
    return *this;
}

QHtmlTableDataCell::QHtmlTableDataCell(const QVariant &content) : QHtmlElement(HTML_TAG_TABLE_DATA_CELL, content)
{

}

QHtmlTableDataCell &QHtmlTableDataCell::setColSpan(const unsigned int value)
{
    addAttribute("colspan", value);
    return *this;
}

QHtmlTableDataCell &QHtmlTableDataCell::setRowSpan(const unsigned int value)
{
    addAttribute("rowspan", value);
    return *this;
}

QHtmlTableDataCell& QHtmlTableDataCell::setHeaders(const QString &value)
{
    addAttribute("headers", value);
    return *this;
}

QHtmlTableDataCell& QHtmlTableDataCell::operator << (const QHtmlElement &element)
{
    children_.append(element);
    return *this;
}

QHtmlTableBody::QHtmlTableBody() : QHtmlElement(HTML_TAG_TABLE_BODY, QVariant())
{

}

QHtmlTable::QHtmlTable() : QHtmlElement(HTML_TAG_TABLE, QVariant())
{

}

QHtmlTable& QHtmlTable::operator << (const QHtmlTableRow& row)
{
    children_.append(row);
    return *this;
}

QHtmlTable& QHtmlTable::operator << (const QHtmlCaption& caption)
{
    children_.append(caption);
    return *this;
}
