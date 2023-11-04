#include "QHtmlWriter"
#include "QDebug"

int main()
{
    QHtmlDocument doc("Welcome to Qt Html!");
    doc.setLang("en");
    QHtmlHead& head = doc.head();
    QHtmlBody& body = doc.body();

    head << QHtmlMeta("utf-8");
    head << QHtmlMeta("viewport", "width=device-width, initial-scale=1, shrink-to-fit=no");
    head << QHtmlMeta().setHttpEquiv(QHtmlMeta::HttpEquiv::Refresh, "3");
    head << QHtmlStyle("{.navbar{margin-bottom:20px;}");
    head << QHtmlLink("stylesheet", "https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css");

    body.setClass("bg-light");

    doc << QHtmlHeader1("Welcome to Qt Html!");

    doc << (QHtmlTable().setClass("table table-hover table-sm")
        << QHtmlCaption("Table caption")
        << (QHtmlTableRow() << QHtmlTableHeader("A") << QHtmlTableHeader("B"))
        << (QHtmlTableRow() << QHtmlTableDataCell("Cell 11") << QHtmlTableDataCell("Cell 12"))
        << (QHtmlTableRow() << QHtmlTableDataCell("Cell 21") << QHtmlTableDataCell("Cell 22"))
        << (QHtmlTableRow() << QHtmlTableDataCell("Cell 31") << (QHtmlTableDataCell() << QHtmlAnchor("RASU", QUrl("http://www.rasu.ru")))));

    QString str;
    QTextStream os(&str);
    os << doc;

    qInfo().noquote() << str;

    return 0;
}
