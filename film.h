#ifndef FILM_H
#define FILM_H

#include <sstream>
#include <iostream>
#include "video.h"

using namespace std;

class Film : public Video
{
private:
    // Suppose to have 1 timeTab for each instance of the Object, but not a shared timeTab
    // Use "copie profonde"
    int* timeTab;

public:
    // Constructor initializing all attribues
    Film(string _name, string _path, int _time, int* _timeTab);
    // Constructor without initialize timeTab (timeTab=Null)
    Film(string _name, string _path, int _time);
    virtual void midifier(int* newTimeTab, int length);
    virtual int* accessor() const;
    virtual void printTimeTab() const;
};

#endif // FILM_H
