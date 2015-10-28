#include <stdio.h>
#include <list>
#include "media.h"
#include "video.h"
#include "photo.h"

int main(){
    list<Media*> mediaList;

    mediaList.push_back(new Video("v1", "lala", 10));
    mediaList.push_back(new Video("v2", "lala", 10));
    mediaList.push_back(new Video("v3", "lala", 10));
    mediaList.push_back(new Photo("p1", "gaga", 5.5, 5.5));
    mediaList.push_back(new Photo("p2", "gaga", 5.5, 5.5));

    for(auto it : mediaList) it->print(cout);
    //v->print(cout);
    return 1;
}
