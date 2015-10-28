#include <stdio.h>
#include "media.h"
#include "video.h"
#include "photo.h"

int main(){

    Video* v = new Video("hi", "lala", 10);
    v->print(cout);
    Photo* photo = new Photo("orange.jpg", "/cal/homes/hao-zhang/CycleMaster/INF224", 500, 600);
    photo->print(cout);
    photo->play();
    return 1;
}
