#include "film.h"
#include "video.h"

// Construct with all attribues
Film::Film(string _name, string _path, int _time, int* _chapiterTab):
    Video(_name, _path, _time), chapiterTab(_chapiterTab)
{}

// Construct without chapiterTab
Film::Film(string _name, string _path, int _time):
    Video(_name, _path, _time)
{
    chapiterTab = nullptr;
}

// Construct safely when using another Film object
Film::Film(const Film& from) : Video(from){
    if (from.chapiterTab)
        chapiterTab = *from.chapiterTab;
    else
        chapiterTab = nullptr;
}

// Security control in case of copie (copie profonde)
Film& Film::operator=(const Film& from){
    Video::operator=(from);
    if (chapiterTab && from.chapiterTab)
        *chapiterTab = *from.chapiterTab;
    else{
        delete chapiterTab;
        if (from.chapiterTab)
            chapiterTab = *from.chapiterTab;
        else
            chapiterTab = nullptr;
    }
    return *this;
}

// Destructor
Film::~Film(){
    delete chapiterTab;
}

// Set chapiterTab and nChapiter
void Film::set_chapiterTab(int* new_chapiterTab, int _nChapiter){
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
    for(int i=0; i<nChapiter; i++){
        s << &(chapiterTab+i);
    }
}
