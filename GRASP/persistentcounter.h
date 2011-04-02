#ifndef PERSISTENTCOUNTER_H
#define PERSISTENTCOUNTER_H

#include <QtCore>

struct PersistantCounterFileException {};
struct PersistantCounterFileReadException {};

class PersistentCounter
{
public:
    PersistentCounter();
    ~PersistentCounter();
    void init(const QString & path);
    long state();
    long increment();
    static long increment(const char *path);
    static QString incrementS(const char *path);

private:
    QFile file;
    long count;

};

#endif // PERSISTENTCOUNTER_H
