#ifndef MEDIA_H
#define MEDIA_H

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

// Class Media is a abastruct class

class Media
{
private:
    string name;
    string path;
public:
    Media(string name, string path);        // Constructor
    virtual ~Media();                       // Destructor
    virtual string getName() const;
    virtual string getPath() const;
    virtual void setName(string );
    virtual void setPath(string );
    virtual void print(ostream & s) const;  // Print attribues values
    virtual void play() const=0;            // Play media
};

#endif // MEDIAOP_H
