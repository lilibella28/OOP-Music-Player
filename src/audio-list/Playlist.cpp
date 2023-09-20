#include "../../include/audio-list/PlayList.h"
#include <iostream>
#include <string>


// SongNode Implementations
SongNode::SongNode(std::string value) : data(value), next(nullptr){};

std::string SongNode::getData() const
{

    return data;
}

void SongNode::setData(const std::string& value)
{

    data = value;
    
}

SongNode * ::getNext() const
{
    return next;
}

void SongNode::setNode(SongNode* node) const
{

    return this->next = node;
}


PlayList::PlayList(const std::string& songTitle):title(songTitle) head(nullptr){}


void PlayList::addSong(const std::string& songTitle){

    PlayList* newSong = new PlayList(songTitle)
    newSong -> next = head;

    head = newSong;

}

void PlayList::removeSong(const std::string& songTitle){

}

void PlayList::displayPlaying() const{


}