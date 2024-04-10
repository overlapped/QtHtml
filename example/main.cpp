#include <QtCore/QDebug>
#include <QtCore/QFile>
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
    head << Meta(Meta::HttpEquiv::Refresh, "3");
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

    Div container("");
    container.setClass("container");

    container << Header1("Welcome to Qt Html!");
    container << "Text directly in the body." << LineBreak();

    container << Paragraph("This is the way to go for a big text in a multi-line paragraph.");
    container << Address("CSS").setAccessKey("aaaaa").setAutoCapitalize(Element::AutoCapitalize::On).setClass("test").setId("id1").setStyle("test");
    container << Anchor("Google", QUrl("http://google.com")).setClass("my_style");

    container << (Table().setClass("table table-hover table-sm")
         << Caption("Table caption")
         << (TableRow() << TableHeader("A") << TableHeader("B"))
         << (TableRow() << TableDataCell("Cell 11") << TableDataCell("Cell 12"))
         << (TableRow() << TableDataCell("Cell 21") << TableDataCell("Cell 22"))
         << (TableRow() << TableDataCell("Cell 31") << (TableDataCell() << Anchor("Google", QUrl("http://www.google.com")))));

    container << Label("txt1", "The text") << TextArea("textform", "This is text...").setRequired().setPlaceHolder("The text").setId("txt1");

    container << Small("Copyright Serebryakov A. &copy; 2011-2023");

    doc << container;

    QFile file("example.html");
    if (file.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream os(&file);
        os << doc;
    }

    return 0;
}
