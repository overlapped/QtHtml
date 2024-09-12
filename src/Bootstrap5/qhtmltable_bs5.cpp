#include "qhtmltable_bs5.hpp"

namespace QtHtml { namespace Bootstrap5 {

QString TableSizeToString(TableBs5::TableSize value) {
    QString result;

    switch (value) {
        case TableBs5::TableSize::Default:              result = BS5_TABLE_CLASS_BASE;     break;
        case TableBs5::TableSize::Small:                result = BS5_TABLE_CLASS_SMALL;    break;
        case TableBs5::TableSize::Large:                result = BS5_TABLE_CLASS_MEDIUM;   break;
        case TableBs5::TableSize::Medium:               result = BS5_TABLE_CLASS_LARGE;    break;
        case TableBs5::TableSize::ExtraLarge:           result = BS5_TABLE_CLASS_XL;       break;
        case TableBs5::TableSize::ExtraExtraLarge:      result = BS5_TABLE_CLASS_XXL;      break;
        default:
            break;
    }

    return result;
}

QString TableTypeToString(TableBs5::TableType value) {
    QString result;

    switch (value) {
        case TableBs5::TableType::Primary:   result = BS5_TABLE_CLASS_PRIMARY;   break;
        case TableBs5::TableType::Secondary: result = BS5_TABLE_CLASS_SECONDARY; break;
        case TableBs5::TableType::Success:   result = BS5_TABLE_CLASS_SUCCESS;   break;
        case TableBs5::TableType::Danger:    result = BS5_TABLE_CLASS_DANGER;    break;
        case TableBs5::TableType::Warning:   result = BS5_TABLE_CLASS_WARNING;   break;
        case TableBs5::TableType::Info:      result = BS5_TABLE_CLASS_INFO;      break;
        case TableBs5::TableType::Light:     result = BS5_TABLE_CLASS_LIGHT;     break;
        case TableBs5::TableType::Dark:      result = BS5_TABLE_CLASS_DARK;      break;
        default:
            break;
    }

    return result;
}

TableBs5::TableBs5(TableSize size) : Table()
{
    classStyleBs5_.insert("base", BS5_TABLE_CLASS_BASE);
    if (size != TableSize::Default)
    {
        classStyleBs5_.insert("size", TableSizeToString(size));
    }
    setClass(updateClassStyle());
}

TableBs5 &TableBs5::setSize(TableSize size)
{
    if (size != TableSize::Default)
    {
        classStyleBs5_.insert("size", TableSizeToString(size));
    }
    setClass(updateClassStyle());

    return *this;
}

TableBs5 &TableBs5::setType(TableType type)
{
    classStyleBs5_.insert("type", TableTypeToString(type));
    setClass(updateClassStyle());

    return *this;
}

TableBs5 &TableBs5::setStripedRows(bool value)
{
    if (value)
    {
        classStyleBs5_.insert(BS5_TABLE_CLASS_STRIPED, BS5_TABLE_CLASS_STRIPED);
    }
    else
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_STRIPED);
    }
    setClass(updateClassStyle());

    return *this;
}

TableBs5 &TableBs5::setStripedColumns(bool value)
{
    if (value)
    {
        classStyleBs5_.insert(BS5_TABLE_CLASS_STRIPED_COLUMNS, BS5_TABLE_CLASS_STRIPED_COLUMNS);
    }
    else
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_STRIPED_COLUMNS);
    }
    setClass(updateClassStyle());

    return *this;
}

TableBs5 &TableBs5::setHover(bool value)
{
    if (value)
    {
        classStyleBs5_.insert(BS5_TABLE_CLASS_HOVER, BS5_TABLE_CLASS_HOVER);
    }
    else
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_HOVER);
    }
    setClass(updateClassStyle());

    return *this;
}

TableBs5 &TableBs5::setBordered(bool value)
{
    if (value)
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_BORDERLESS);
        classStyleBs5_.insert(BS5_TABLE_CLASS_BORDERED, BS5_TABLE_CLASS_BORDERED);
    }
    else
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_BORDERED);
    }
    setClass(updateClassStyle());

    return *this;
}

TableBs5 &TableBs5::setBorderless(bool value)
{
    if (value)
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_BORDERED);
        classStyleBs5_.insert(BS5_TABLE_CLASS_BORDERLESS, BS5_TABLE_CLASS_BORDERLESS);
    }
    else
    {
        classStyleBs5_.remove(BS5_TABLE_CLASS_BORDERLESS);
    }
    setClass(updateClassStyle());

    return *this;
}

QString TableBs5::updateClassStyle()
{
    QStringList styles(classStyleBs5_.values());
    return styles.join(" ");
}

}}
