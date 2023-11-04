#include "qhtmlutils.hpp"

QString QHtmlUtils::TargetToString(QHtmlElement::Target value)
{
    QString result;

    switch (value) {
        case QHtmlElement::Target::Self: result = "_self"; break;
        case QHtmlElement::Target::Parent: result = "_parent"; break;
        case QHtmlElement::Target::Blank: result = "_blank"; break;
        case QHtmlElement::Target::Top: result = "_self"; break;
        default:
            break;
    }

    return result;
}
