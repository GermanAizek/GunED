#ifndef GUNSPECREADER_H
#define GUNSPECREADER_H

#include <QObject>
#include "propertywidget.h"

class GunspecReader : public QObject
{
    Q_OBJECT
public:
    explicit GunspecReader(QObject *parent = nullptr);
    bool readGunspec(QString cfile, QList<PropertyWidget *> &widgets, QString &unparsed);

signals:

};

#endif // GUNSPECREADER_H
