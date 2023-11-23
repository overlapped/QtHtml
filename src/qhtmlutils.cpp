#include "qhtmlutils.hpp"

namespace QtHtml {

QString Utils::TargetToString(Target value)
{
    QString result;

    switch (value) {
        case Target::Self: result = "_self"; break;
        case Target::Parent: result = "_parent"; break;
        case Target::Blank: result = "_blank"; break;
        case Target::Top: result = "_self"; break;
        default:
            break;
    }

    return result;
}

QString Utils::FormMethodToString(FormMethod value) {
    QString result;

    switch (value) {
        case FormMethod::Post: result = "post"; break;
        case FormMethod::Get: result = "get"; break;
        case FormMethod::Dialog: result = "dialog"; break;
        default:
            break;
    }

    return result;
}

}
