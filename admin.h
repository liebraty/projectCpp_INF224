#ifndef ADMIN_H
#define ADMIN_H

#include <stdio.h>
#include <memory>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <regex>
#include <cstring>

#include "media.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"

using namespace std;

typedef map<string, shared_ptr<Media> > MediaMap;
typedef map<string, shared_ptr<Group> > GroupMap;

class Admin{

private:
    MediaMap myMediaMap;
    GroupMap myGroupMap;

public:

    Admin(){

    }

    // ****** Create new Photo, Video, Film, Group **************************************************

    shared_ptr<Photo> createPhoto(string _name, string _path, float _latitude, float _longitude){
        shared_ptr<Photo> myNewPhoto(new Photo(_name, _path,_latitude,_longitude));
        myMediaMap[_name] = myNewPhoto;
        return myNewPhoto;
    }

    shared_ptr<Video> createVideo(string _name,  string _path, unsigned int _time){
        shared_ptr<Video> myNewVideo(new Video(_name, _path,_time));
        myMediaMap[_name] = myNewVideo;
        return myNewVideo;
    }

    shared_ptr<Film> createFilm(string _name, string _path, unsigned int _time){
        shared_ptr<Film> myNewFilm(new Film(_name, _path, _time));
        myMediaMap[_name] = myNewFilm;
        return myNewFilm;
    }

    shared_ptr<Group> createGroup(string _name){
        shared_ptr<Group> myNewGroup(new Group(_name));
        myGroupMap[_name]= myNewGroup;
        return myNewGroup;
    }



    // ****** Add new Photo, Video, Film, Group **************************************************

    void addPhoto(shared_ptr<Media> myPhoto){
        myMediaMap[myPhoto->getName()] = myPhoto;
    }

    void addVideo(shared_ptr<Media> myVideo){
        myMediaMap[myVideo->getName()] = myVideo;
    }

    void addFilm(shared_ptr<Media> myFilm){
        myMediaMap[myFilm->getName()] = myFilm;
    }

    void addGroup(shared_ptr<Group> myGroup){
        myGroupMap[myGroup->getName()] = myGroup;
    }



    // ****** Delete object named "objectName ********************************************************

    void deleteObject(string objectName){

        MediaMap::iterator obj = myMediaMap.find(objectName);
        GroupMap::iterator objG = myGroupMap.find(objectName);

        if(obj!=myMediaMap.end()){                              // If objectName is a Media's name
            myMediaMap.erase(objectName);
            cout<<"Media "<<objectName<<" has been erased"<<endl;

            shared_ptr<Media> objFound((*obj).second);          // Find groups which contains the object
            for(GroupMap::iterator it = myGroupMap.begin(); it != myGroupMap.end(); ++it){
                shared_ptr<Group> grp((*it).second);

                for(Group::iterator itGroup=grp.get()->begin(); itGroup!=grp.get()->end(); itGroup++){
                    if(*itGroup==objFound){
                        grp->erase(itGroup);                    // Update group containing the object
                        cout<<"Group "<<grp->getName()<<" update"<<endl;
                        break;
                    }
                }
            }
        }

        else if(objG!=myGroupMap.end()){                             // If objectName is a Group's name
            myGroupMap.erase(objectName);
            cout<<"Group "<<objectName<<" has been erased"<<endl;
        }

        else{
            cout<<"Object named"<< objectName <<" not found" << endl;
        }
    }






    // ****** Find object : Media or Group ************************************************************

    void findObject(string objectName){
        if(myMediaMap.find(objectName) != myMediaMap.end()){
            cout<<"Media "<< objectName <<" found : "<<endl;
            myMediaMap[objectName]->print(cout);
        }
        else if(myGroupMap.find(objectName)!=myGroupMap.end()){
            cout<<"Group "<< objectName <<" found : "<<endl;
            myGroupMap[objectName]->print(cout);
        }
        else{
            cout<<"Object named "<< objectName <<" not found"<<endl;
        }
    }






    // ****** Play object : Media or Group ************************************************************

    void play(string objectName){
        if(myMediaMap.find(objectName)!=myMediaMap.end()){
            cout<<"Media "<< objectName <<" found, ready to play "<<endl;
            myMediaMap[objectName]->play();
        }
        else if(myGroupMap.find(objectName)!=myGroupMap.end()){
            cout << objectName <<" is a group name, you can not play the hold group in the same time"<<endl;
        }
        else{
            cout<<"Object named "<< objectName <<" not found"<<endl;
        }
    }


};

#endif // ADMIN_H
