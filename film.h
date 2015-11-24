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
    unsigned int* chapiterTab = nullptr;
    unsigned int nChapiter;

public:
    // Construct with all attribues
    Film(string _name, string _path, unsigned int _time, unsigned int _nChapiter, unsigned int* _chapiterTab);

    // Construct without chapiterTab
    Film(string _name, string _path, int _time);

    // Construct safely when using another Film object
    Film(const Film&);

    // Security control in case of copie (copie profonde)
    Film& operator=(const Film&);

    virtual ~Film();
    virtual void set_chapiterTab(unsigned int _nChapiter, unsigned int* newchapiterTab);
    virtual unsigned int* get_chapiterTab() const;
    virtual unsigned int get_nChapiter() const;
    virtual void print_chapiterTab(ostream & s) const;
};

#endif // FILM_H
