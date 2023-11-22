#ifndef __Q_HTML_TABLE__
#define __Q_HTML_TABLE__

#include "qhtmlelement.hpp"
#include "qhtmlcaption.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlTableHeader : public QHtmlElement
{
public:
    enum class Scope {
        Row,
        Col,
        RowGroup,
        ColGroup
    };

    explicit QHtmlTableHeader(const QString &content = QString());

    QHtmlTableHeader& setAbbreviation(const QString &value);
    QHtmlTableHeader& setColSpan(unsigned int value);
    QHtmlTableHeader& setRowSpan(unsigned int value);
    QHtmlTableHeader& setHeaders(const QString &value);
    QHtmlTableHeader& setScope(Scope value);

    QHtmlTableHeader& operator << (QHtmlElement& element);
};

class QTHTML_EXPORT QHtmlTableDataCell : public QHtmlElement
{
public:
    explicit QHtmlTableDataCell(const QVariant &content = QString());

    QHtmlTableDataCell& setColSpan(const unsigned int value);
    QHtmlTableDataCell& setRowSpan(const unsigned int value);
    QHtmlTableDataCell& setHeaders(const QString &value);

    QHtmlTableDataCell& operator << (const QHtmlElement& element);
};

class QTHTML_EXPORT QHtmlTableRow : public QHtmlElement
{
public:
    QHtmlTableRow();

    QHtmlTableRow& operator << (QHtmlElement& element) = delete;
    QHtmlTableRow& operator << (const QHtmlTableHeader& col);
    QHtmlTableRow& operator << (const QHtmlTableDataCell& col);

    QHtmlTableRow& setStyle(const QString& value);
};

class QTHTML_EXPORT QHtmlTableHead : public QHtmlElement
{
public:
    QHtmlTableHead();

    QHtmlTableHead& operator << (QHtmlElement& element) = delete;
    QHtmlTableHead& operator << (const QHtmlTableRow& row);
};

class QTHTML_EXPORT QHtmlTableFooter : public QHtmlElement
{
public:
    QHtmlTableFooter();

    QHtmlTableFooter& operator << (QHtmlElement& element) = delete;
    QHtmlTableFooter& operator << (const QHtmlTableRow& row);
};

class QTHTML_EXPORT QHtmlTableBody : public QHtmlElement
{
public:
    QHtmlTableBody();

    QHtmlTableBody& operator << (QHtmlElement& element) = delete;
    QHtmlTableBody& operator << (const QHtmlTableRow& row);
};

class QTHTML_EXPORT QHtmlTable : public QHtmlElement
{
public:
    QHtmlTable();

    QHtmlTable& operator << (QHtmlElement& element) = delete;

    QHtmlTable &operator << (const QHtmlTableBody &body);
    QHtmlTable &operator << (const QHtmlTableHead &head);
    QHtmlTable &operator << (const QHtmlTableFooter &footer);
    QHtmlTable& operator << (const QHtmlTableRow& row);
    QHtmlTable& operator << (const QHtmlCaption& caption);
};

}

#endif // #ifndef __Q_HTML_TABLE__
