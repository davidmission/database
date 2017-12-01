#include "databasepool.h"
#include <QMutex>
#include "src/data/databasefactory.h"

DatabasePool *DatabasePool::m_instance = NULL;

DatabasePool::DatabasePool(): m_maxCount(2)
{
    createDatabase();
}

DatabasePool *DatabasePool::getInstance()
{
    if(m_instance == NULL)
    {
        QMutex mutex(QMutex::NonRecursive);
        mutex.lock();

        if(m_instance == NULL)
        {
            m_instance = new DatabasePool();
        }
        mutex.unlock();
    }

    return m_instance;
}

void DatabasePool::setSize(int count)
{
    m_maxCount = count > 0 ? count : 0;
}

Database *DatabasePool::getDatabase()
{
    Database *_d = NULL;

    if(m_unused.size() == 0)
    {
        createDatabase();
    }


    static int index = 0;
    _d = m_unused[index];
    m_unused.removeAt(index);

    return _d;
}

void DatabasePool::release(Database *database)
{
    m_unused << database;
}

void DatabasePool::createDatabase()
{
    int _c = 2 * m_maxCount;
    DatabaseFactory factory;

    for(int i = m_maxCount; i < _c; ++i)
    {
        Database *_d = factory.createDatabase();
        m_unused << _d;
        m_databases << _d;
    }

    m_maxCount = _c;
}

