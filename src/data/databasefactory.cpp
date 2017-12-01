#include "databasefactory.h"

#include "src/data/base/oracle.h"
#include "common/setting.h"
#include <QDate>


Database *DatabaseFactory::createDatabase()
{
    QString name = QDate::currentDate().toString();
    Database *database = NULL;

    QString type = Setting::getDataType();

    if(type == "oracle")
    {
        database = new Oracle(name);
    }


    database->connect(Setting::getDatabaseInfo());
    return database;
}

DatabaseFactory::DatabaseFactory()
{

}

