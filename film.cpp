
#include <stdio.h>
#include <sstream>
#include <iostream>
#include "media.h"
#include "video.h"
#include "film.h"

using namespace std;

// Construct with all attribues
Film::Film(string _name, string _path, int _time, int _nChapiter, int* _chapiterTab):
    Video(_name, _path, _time), nChapiter(_nChapiter), chapiterTab(_chapiterTab)
{}

// Construct without chapiterTab
Film::Film(string _name, string _path, int _time):
    Video(_name, _path, _time)
{
    chapiterTab = nullptr;
    nChapiter = 0;
}

// Construct safely when using another Film object
Film::Film(const Film& from) : Video(from){
    nChapiter = from.nChapiter;
    if (from.chapiterTab) chapiterTab = new int(*from.chapiterTab);
    else chapiterTab = nullptr;
}

// Security control in case of copie (copie profonde)
Film& Film::operator=(const Film& from){
    Video::operator = (from);
    nChapiter = from.nChapiter;
    if (chapiterTab && from.chapiterTab)
        *chapiterTab = *from.chapiterTab;
    else{
        delete chapiterTab;
        if (from.chapiterTab) chapiterTab = new int(*from.chapiterTab);
        else chapiterTab = nullptr;
    }
    return *this;
}

// Destructor
Film::~Film(){
    delete []chapiterTab;
    chapiterTab=nullptr;
    cout<<"Object destructed"<<getName()<<endl;
}

// Set chapiterTab and nChapiter
void Film::set_chapiterTab(int _nChapiter, int* new_chapiterTab){
    chapiterTab = new_chapiterTab;
    nChapiter = _nChapiter;
}

// Getters
int* Film::get_chapiterTab() const{
    return chapiterTab;
}

int Film::get_nChapiter() const{
    return nChapiter;
}

// Print chpiters
void Film::print_chapiterTab(ostream & s) const{
    s << "chapiter number:"<<nChapiter<<endl<< "Chapiter list :" << endl;
    for(int i=0; i<nChapiter; i++){
        s << "charpiter"<< i+1 << " : " << *(chapiterTab+i) << endl;
    }
}
