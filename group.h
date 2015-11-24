#ifndef GROUP_H
#define GROUP_H

#include <list>
#include <memory>

#include "media.h"
#include "photo.h"
#include "video.h"
#include "film.h"

class Group: public list<shared_ptr<Media> >{

private:
    string groupName;
public:


    // Constructor
    Group(string _groupName):list<shared_ptr<Media>>(){
        groupName=_groupName;
    }


    // Destroyer : Not really necessary
    virtual ~Group() {
        cout << "Group " << getName() << " has been destroyed" <<endl;
    }


    // getter
    string getName(){
        return groupName;
    }


    // Print method
    void print(ostream& s){
        s <<"*********** Begin group "<<groupName<<" *********"<<endl;
        for (Group::iterator it = this->begin(); it != this->end(); it++){
            (*it)->print(s);
        }
        s <<"************* End group "<<groupName<<" *********"<<endl;
    }

};

#endif // GROUP_H
