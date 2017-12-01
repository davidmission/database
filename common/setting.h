#ifndef SETTING_H
#define SETTING_H

#include "src/data/database.h"
#include <QString>

class Setting
{
public:
    Setting();

    static QString getDataType();

    static DataBaseInfo getDatabaseInfo();



private:
    static QString m_settingPath;

};

#endif // SETTING_H
