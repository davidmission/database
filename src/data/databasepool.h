#ifndef ORACLEPOOL_H
#define ORACLEPOOL_H

#include <QList>
#include "src/data/database.h"

class DatabasePool
{
public:


private:
    DatabasePool();

    DatabasePool *getInstance();

    void setSize(int count);

    Database *getDatabase();

    void release(Database *database);




private:
    void createDatabase();

private:
    int m_maxCount;

    QList<Database *> m_databases;
    QList<Database *> m_unused;

    static DatabasePool *m_instance;
};

#endif // ORACLEPOOL_H
