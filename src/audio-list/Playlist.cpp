#include "../../include/audio-list/Playlist.h"
#include "../../include/audio-list/Node.h"
#include <iostream>
#include <string>




PlayList::PlayList(const std::string& songTitle): head(nullptr){}


void PlayList::addSong(const std::string& songTitle){

    Node* newSong = new Node(songTitle);
    newSong -> setNode (head);

    head = newSong;

}

void PlayList::removeSong(const std::string& songTitle){

}

void PlayList::displayPlaying() const{
    //initiliaze the node* current = head;
    Node* current = head;
    //add a while loop to check that while curren is not equal null
    // print the current data, and set the current data to current -> next
    while(current != nullptr){
        std::cout << current ->getData() << std::endl;
        current = current -> getNext();

    }

}