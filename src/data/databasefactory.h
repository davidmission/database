#ifndef DATABASEPOOL_H
#define DATABASEPOOL_H
#include "src/data/database.h"

class DatabaseFactory
{
public:
    Database * createDatabase();

    DatabaseFactory();



//private members
private:
    static DatabaseFactory *m_instance;
};

#endif // DATABASEPOOL_H
