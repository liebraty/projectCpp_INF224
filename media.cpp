#include <sstream>
#include <iostream>
#include "media.h"

using namespace std;

Media::Media(string _name, string _path)
{
    name = _name;
    path = _path;
}

Media::~Media(){

}

string Media::getName() const{
    return name;
}

string Media::getPath() const{
    return path;
}

void Media::setName(string _name){
    name = _name;
}

void Media::setPath(string _path){
    path = _path;
}

void Media::print(ostream & s) const{
    s << endl << "name : " << getName() << endl << "path : " << getPath() << endl<< endl;
}


