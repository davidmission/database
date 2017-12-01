#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QString>

typedef struct _databaseInfo
{
    QString serviceIp;
    QString userName;
    QString Password;
    int port;

}DataBaseInfo;

class Database
{
public:
    virtual bool connect(const _databaseInfo &databaseInfo) = 0;
};

#endif // DATABASE_H
