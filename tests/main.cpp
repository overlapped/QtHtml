#include <QtCore/QDebug>
#include <QHtmlWriter>

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

    QHtmlList navList(false, "navbar-nav mr-auto");
    navList << (QHtmlListItem().setClass("nav-item active") << QHtmlAnchor("Home", QUrl("#")).setClass("nav-link"));
    navList << (QHtmlListItem().setClass("nav-item") << QHtmlAnchor("Link", QUrl("#")).setClass("nav-link"));
    navList << (QHtmlListItem().setClass("nav-item") << QHtmlAnchor("Disabled", QUrl("#")).setClass("nav-link disabled"));
    navList << (QHtmlListItem().setClass("nav-item dropdown")
            << QHtmlAnchor("Dropdown", QUrl("#")).setClass("nav-link dropdown-toggle").setId("dropdown01").addAttribute("data-toggle", "dropdown").addAttribute("aria-haspopup", "true").addAttribute("aria-expanded", "false")
            << (QHtmlDiv("dropdown-menu").addAttribute("aria-labelledby", "dropdown01")
            << QHtmlAnchor("Action", QUrl("#")).setClass("dropdown-item")
            << QHtmlAnchor("Other", QUrl("#")).setClass("dropdown-item")));

    doc << (QHtmlNav("navbar navbar-expand navbar-dark bg-dark") << QHtmlDiv("collapse navbar-collapse") << navList);

    QHtmlDiv main("container");

    main << QHtmlHeader1("Welcome to Qt Html!");
    main << "Text directly in the body." << QHtmlLineBreak();

    main << QHtmlParagraph("This is the way to go for a big text in a multi-line paragraph.");
    main << QHtmlAnchor("Google", QUrl("http://google.com")).setClass("my_style");

    main << (QHtmlTable().setClass("table table-hover table-sm")
         << QHtmlCaption("Table caption")
         << (QHtmlTableRow() << QHtmlTableHeader("A") << QHtmlTableHeader("B"))
         << (QHtmlTableRow() << QHtmlTableDataCell("Cell 11") << QHtmlTableDataCell("Cell 12"))
         << (QHtmlTableRow() << QHtmlTableDataCell("Cell 21") << QHtmlTableDataCell("Cell 22"))
         << (QHtmlTableRow() << QHtmlTableDataCell("Cell 31") << (QHtmlTableDataCell() << QHtmlAnchor("Google", QUrl("http://www.google.com")))));

    main << QHtmlLabel("txt1", "The text") << QHtmlTextArea("textform", "This is text...").setRequired().setPlaceHolder("The text").setId("txt1");

    main << QHtmlSmall("Copyright Serebryakov A. &copy; 2011-2023");

    doc << main;

    QString str;
    QTextStream os(&str);
    os << doc;

    qInfo().noquote() << str;

    return 0;
}
