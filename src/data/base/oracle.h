#ifndef ORACLE_H
#define ORACLE_H

#include "src/data/database.h"

class Oracle : public Database
{
public:
    Oracle(const QString &name);

    bool connect(const _databaseInfo &databaseInfo);
};

#endif // ORACLE_H
