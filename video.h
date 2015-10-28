#ifndef VIDEO_H
#define VIDEO_H

#include <sstream>
#include <iostream>
#include "media.h"

using namespace std;

class Video : public Media
{
private:
    int time;
public:
    Video(string _name, string _path, int _time);
    virtual int getTime() const;
    virtual void setTime(int _time);
    virtual void print(ostream &s) const override;
    virtual void play() const override;
};

#endif // VIDEO_H
