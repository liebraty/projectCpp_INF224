#ifndef FILM_H
#define FILM_H

#include <sstream>
#include <iostream>
#include "video.h"


using namespace std;

class Film : public Video
{
private:
    // Suppose to have 1 chapiterTab for each instance of the Object, but not a shared chapiterTab
    // Use "copie profonde"
    int* chapiterTab;
    int nChapiter;

public:
    // Construct with all attribues
    Film(string _name, string _path, int _time, int _nChapiter, int* _chapiterTab);
    // Construct without chapiterTab
    Film(string _name, string _path, int _time);
    // Construct safely when using another Film object
    Film(const Film&);
    // Security control in case of copie (copie profonde)
    Film& operator=(const Film&);
    virtual ~Film();
    virtual void set_chapiterTab(int _nChapiter, int* newchapiterTab);
    virtual int* get_chapiterTab() const;
    virtual int get_nChapiter() const;
    virtual void print_chapiterTab(ostream & s) const;
};

#endif // FILM_H
