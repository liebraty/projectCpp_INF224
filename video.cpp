#include <stdio.h>
#include <sstream>
#include <iostream>
#include "media.h"
#include "video.h"

using namespace std;

Video::Video(string _name, string _path, int _time):
    Media(_name, _path), time(_time)
    {}

int Video::getTime() const{
    return time;
}

void Video::setTime(int _time){
    time = _time;
}

void Video::print(ostream &s) const{
    s << endl << "name : " << getName() << endl << "path : " << getPath() << endl <<"time : " << getTime()<< endl;
}

void Video::play() const{
    string runFile = "mpv"+this->getName()+"&";
    system(runFile.c_str());
}

