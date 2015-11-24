#include <stdio.h>
#include <list>
#include <memory>
#include <sstream>
#include <iostream>
#include <string>

#include "media.h"
#include "video.h"
#include "photo.h"
#include "film.h"
#include "group.h"
#include "admin.h"

int main(){
    /*
     *
    // Test for step 5 ***************************************************
    list<Media*> mediaList;
    mediaList.push_back(new Video("v1", "lala", 10));
    mediaList.push_back(new Video("v2", "lala", 10));
    mediaList.push_back(new Video("v3", "lala", 10));
    mediaList.push_back(new Photo("p1", "gaga", 5.5, 5.5));
    mediaList.push_back(new Photo("p2", "gaga", 5.5, 5.5));
    mediaList.push_back(new Film("f1", "hi", 10));

    for(auto it : mediaList) it->print(cout);
    //v->print(cout);


    // Test for step 6-7 *************************************************
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



    // Test step 8-9 *****************************************************
    shared_ptr<Group> g1(new Group("g1"));
    shared_ptr<Group> g2(new Group("g2"));

    shared_ptr<Media> v1(new Video("v1", "lala", 10));
    shared_ptr<Media> v2(new Video("v2", "lala", 10));
    shared_ptr<Media> p1(new Photo("p1", "baba", 20, 20));
    shared_ptr<Media> p2(new Photo("p2", "baba", 20, 20));
    shared_ptr<Media> f1(new Film("f1", "haha", 30));
    shared_ptr<Media> f2(new Film("f2", "haha", 30));

    g1->push_back(v1);
    g1->push_back(p1);
    g1->push_back(f1);
    //g1->print(cout);

    g2->push_back(v1);
    g2->push_back(p1);
    g2->push_back(f1);
    g2->push_back(v2);
    g2->push_back(p2);
    g2->push_back(f2);
    //g2->print(cout);

    //delete(g1);
    //g2->print(cout);

    // Test 10
    Admin* a = new Admin();
    a->addVideo(v1);
    a->addVideo(v2);
    a->addPhoto(p1);
    a->addGroup(g1);
    a->findObject("g1");
    a->deleteObject("p1");
    a->findObject("g1");
    */








    return 1;
}
