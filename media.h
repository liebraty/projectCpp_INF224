#ifndef MEDIA_H
#define MEDIA_H

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Media
{
private:
    string name;
    string path;
public:
    Media(string name, string path);
    virtual ~Media();
    virtual string getName() const;
    virtual string getPath() const;
    virtual void setName(string );
    virtual void setPath(string );
    virtual void print(ostream & s) const;
    virtual void play() const=0;
};

#endif // MEDIAOP_H
