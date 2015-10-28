#ifndef PHOTO_H
#define PHOTO_H

#include <sstream>
#include <iostream>
#include "media.h"

using namespace std;

class Photo : public Media
{
private:
    float latitude;
    float longitude;
public:
    Photo(string name, string path, float latitude, float longitude);
    virtual float getLatitude () const;
    virtual float getLongitude() const;
    virtual void setLatitude(float _latitude);
    virtual void setLongitude(float _longitude);
    virtual void print(ostream &s) const override;
    virtual void play() const override;
};

#endif // PHOTO_H
