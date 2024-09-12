#ifndef __Q_HTML_TABLE_BS5__
#define __Q_HTML_TABLE_BS5__

#include "qhtmldefines_bs5.hpp"
#include "qhtmltable.hpp"

namespace QtHtml { namespace Bootstrap5 {

class QTHTML_EXPORT TableBs5 : public Table
{
public:
    enum class TableSize
    {
        Default,
        Small,
        Medium,
        Large,
        ExtraLarge,
        ExtraExtraLarge,
        Fluid
    };

    enum class TableType
    {
        Primary,
        Secondary,
        Success,
        Danger,
        Warning,
        Info,
        Light,
        Dark
    };

    explicit TableBs5(TableSize size = TableSize::Default);

    TableBs5& setSize(TableSize size);
    TableBs5& setType(TableType type);
    TableBs5& setStripedRows(bool value);
    TableBs5& setStripedColumns(bool value);
    TableBs5& setHover(bool value);
    TableBs5& setBordered(bool value);
    TableBs5& setBorderless(bool value);

private:
    BS5ClassStyle classStyleBs5_;
    QString updateClassStyle();
};

}}

#endif // #ifndef __Q_HTML_TABLE_BS5__
