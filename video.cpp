#include <stdio.h>
#include <sstream>
#include <iostream>
#include "media.h"
#include "video.h"

using namespace std;

// Constructor
Video::Video(string _name, string _path, int _time):
    Media(_name, _path), time(_time)
    {}

// Getter and Setter
int Video::getTime() const{
    return time;
}

void Video::setTime(int _time){
    time = _time;
}

// Print attribues values
void Video::print(ostream &s) const{
    s << endl << "name : " << getName() << endl << "path : " << getPath() << endl <<"time : " << getTime()<< endl;
}

// Play video
void Video::play() const{
    string runFile = "mpv "+getPath()+getName()+" &";
    system(runFile.c_str());
}

