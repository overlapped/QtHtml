#include <QtCore/QDebug>
#include <QHtmlWriter>

int main()
{
    using namespace QtHtml;

    Document doc("Welcome to Qt Html!");
    doc.setLang("en");
    Head& head = doc.head();
    Body& body = doc.body();

    head << Meta("utf-8");
    head << Meta("viewport", "width=device-width, initial-scale=1, shrink-to-fit=no");
    head << Meta().setHttpEquiv(Meta::HttpEquiv::Refresh, "3");
    head << Style("{.navbar{margin-bottom:20px;}");
    head << Link("stylesheet", "https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css");

    body.setClass("bg-light");

    List navList(false, "navbar-nav mr-auto");
    navList << (ListItem().setClass("nav-item active") << Anchor("Home", QUrl("#")).setClass("nav-link"));
    navList << (ListItem().setClass("nav-item") << Anchor("Link", QUrl("#")).setClass("nav-link"));
    navList << (ListItem().setClass("nav-item") << Anchor("Disabled", QUrl("#")).setClass("nav-link disabled"));
    navList << (ListItem().setClass("nav-item dropdown")
            << Anchor("Dropdown", QUrl("#")).setClass("nav-link dropdown-toggle").setId("dropdown01").addAttribute("data-toggle", "dropdown").addAttribute("aria-haspopup", "true").addAttribute("aria-expanded", "false")
            << (Div("dropdown-menu").addAttribute("aria-labelledby", "dropdown01")
            << Anchor("Action", QUrl("#")).setClass("dropdown-item")
            << Anchor("Other", QUrl("#")).setClass("dropdown-item")));

    doc << (Nav("navbar navbar-expand navbar-dark bg-dark") << Div("collapse navbar-collapse") << navList);

    Div main("container");

    main << Header1("Welcome to Qt Html!");
    main << "Text directly in the body." << LineBreak();

    main << Paragraph("This is the way to go for a big text in a multi-line paragraph.");
    main << Anchor("Google", QUrl("http://google.com")).setClass("my_style");

    main << (Table().setClass("table table-hover table-sm")
         << Caption("Table caption")
         << (TableRow() << TableHeader("A") << TableHeader("B"))
         << (TableRow() << TableDataCell("Cell 11") << TableDataCell("Cell 12"))
         << (TableRow() << TableDataCell("Cell 21") << TableDataCell("Cell 22"))
         << (TableRow() << TableDataCell("Cell 31") << (TableDataCell() << Anchor("Google", QUrl("http://www.google.com")))));

    main << Label("txt1", "The text") << TextArea("textform", "This is text...").setRequired().setPlaceHolder("The text").setId("txt1");

    main << Small("Copyright Serebryakov A. &copy; 2011-2023");

    doc << main;

    QString str;
    QTextStream os(&str);
    os << doc;

    qInfo().noquote() << str;

    return 0;
}
