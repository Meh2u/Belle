#ifndef FONTFILE_H
#define FONTFILE_H

#include "asset.h"

class FontFile : public Asset
{
public:
    FontFile(const QString&);
    int id() const;
    virtual bool isNull() const;

private:
    int mId;
};

#endif // FONTFILE_H