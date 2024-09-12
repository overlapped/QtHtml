#include "qhtmlcontainer_bs5.hpp"

namespace QtHtml { namespace Bootstrap5 {

QString ContainerTypeToString(ContainerBs5::ContainerType value) {
    QString result;

    switch (value) {
        case ContainerBs5::ContainerType::Default:              result = BS5_CONTAINER_CLASS_BASE;     break;
        case ContainerBs5::ContainerType::Small:                result = BS5_CONTAINER_CLASS_SMALL;    break;
        case ContainerBs5::ContainerType::Large:                result = BS5_CONTAINER_CLASS_MEDIUM;   break;
        case ContainerBs5::ContainerType::Medium:               result = BS5_CONTAINER_CLASS_LARGE;    break;
        case ContainerBs5::ContainerType::ExtraLarge:           result = BS5_CONTAINER_CLASS_XL;       break;
        case ContainerBs5::ContainerType::ExtraExtraLarge:      result = BS5_CONTAINER_CLASS_XXL;      break;
        case ContainerBs5::ContainerType::Fluid:                result = BS5_CONTAINER_CLASS_FLUID;    break;
        default:
            break;
    }

    return result;
}

ContainerBs5::ContainerBs5(ContainerType type, const QString &content) : Div(content)
{
    classStyleBs5_.insert("type", ContainerTypeToString(type));
    setClass(updateClassStyle());
}

ContainerBs5 &ContainerBs5::setType(ContainerType type)
{
    classStyleBs5_.insert("type", ContainerTypeToString(type));
    setClass(updateClassStyle());

    return *this;
}

QString ContainerBs5::updateClassStyle()
{
    QStringList styles(classStyleBs5_.values());
    return styles.join(" ");
}

}}
