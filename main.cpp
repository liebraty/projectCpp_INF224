#include <stdio.h>
#include <list>
#include "media.h"
#include "video.h"
#include "photo.h"
#include "film.h"

int main(){
    list<Media*> mediaList;

    mediaList.push_back(new Video("v1", "lala", 10));
    mediaList.push_back(new Video("v2", "lala", 10));
    mediaList.push_back(new Video("v3", "lala", 10));
    mediaList.push_back(new Photo("p1", "gaga", 5.5, 5.5));
    mediaList.push_back(new Photo("p2", "gaga", 5.5, 5.5));
    mediaList.push_back(new Film("f1", "hi", 10));

    for(auto it : mediaList) it->print(cout);
    //v->print(cout);

    int a = 3;
    int b[] = {1,2,3};
    Film* f2 = new Film("f2", "hi", 10, a, b);
    f2->print(cout);
    f2->print_chapiterTab(cout);

    Film* f3=new Film("f3", "hi", 10);
    f3->print(cout);
    f3->print_chapiterTab(cout);

    f3=f2;
    f3->print(cout);
    f3->print_chapiterTab(cout);

    int c = 4;
    int d[] = {4,5,6,7};
    f3->set_chapiterTab(c,d);
    f3->print(cout);
    f3->print_chapiterTab(cout);
    f3->~Film();

    f2->print(cout);
    f2->print_chapiterTab(cout);

    return 1;
}
