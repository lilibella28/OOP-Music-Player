#include "../../include/audio-list/Playlist.h"
#include <iostream>
#include <string>




PlayList::PlayList(const std::string& songTitle):title(songTitle) head(nullptr){}


void PlayList::addSong(const std::string& songTitle){

    PlayList* newSong = new PlayList(songTitle)
    newSong -> next = head;

    head = newSong;

}

void PlayList::removeSong(const std::string& songTitle){

}

void PlayList::displayPlaying() const{
    //initiliaze the node* current = head;
    PlayList* current = head;
    //add a while loop to check that while curren is not equal null
    // print the current data, and set the current data to current -> next
    while(current != nullptr){
        std::cout << current ->data << std::endl;
        current = current -> next;

    }

}