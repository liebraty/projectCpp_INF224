#include <stdio.h>
#include <sstream>
#include <iostream>
#include "media.h"
#include "photo.h"

using namespace std;

Photo::Photo(string _name, string _path, float _latitude, float _longitude):
    Media(_name, _path), latitude(_latitude), longitude(_longitude)
    {}

// Get attribus values
float Photo::getLatitude() const{
    return latitude;
}

float Photo::getLongitude() const{
    return longitude;
}

// Set attribus values
void Photo::setLatitude(float _latitude){
    latitude = _latitude;
}

void Photo::setLongitude(float _longitude){
    longitude = _longitude;
}

// Print attribus values
void Photo::print(ostream &s) const {
    s << endl << "name : " << getName() << endl << "path : " << getPath() << endl <<"latitude : " << getLatitude()<< endl << "longitude : "<< getLongitude() << endl;
}

// Open image : play media file
void Photo::play() const{
    string runFile = "imagej "+getPath()+getName()+" &";
    system(runFile.c_str());
}
