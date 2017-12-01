#include "setting.h"

QString Setting::m_settingPath = "setting";

Setting::Setting()
{

}

QString Setting::getDataType()
{
    return "oracle";
}

DataBaseInfo Setting::getDatabaseInfo()
{
    DataBaseInfo info;

    return info;
}

