#include "persistentcounter.h"
#include <QtCore>

PersistentCounter::PersistentCounter() {}

PersistentCounter::~PersistentCounter()
{
    if(!file.isOpen()) return;
    if(!file.isWritable()) return;
    file.seek(0);
    QString data = QString::number(count);
    file.write(data.toLatin1());
}

void PersistentCounter::init(const QString & path) 
{
    file.setFileName(path);
    bool existed = QFile::exists(path);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text)) throw PersistantCounterFileException();
    if(!existed) count = 0;
    else {
        long c = file.readAll().toLong();
        if(c == 0) throw PersistantCounterFileReadException();
        count = c;
    }
}

long PersistentCounter::state()
{
    return count;
}

long PersistentCounter::increment()
{
    return ++count;
}

long PersistentCounter::increment(const char *path)
{
    PersistentCounter pc;
    pc.init(QString(path));
    return pc.increment();
}

QString PersistentCounter::incrementS(const char *path)
{
    return QString::number(PersistentCounter::increment(path));
}
