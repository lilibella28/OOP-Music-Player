#include "../../include/audio-list/Playlist.h"
#include <iostream>
#include <string>

Node::Node(std::string value) : data(value), next(nullptr){};

std::string Node::getData() const
{

    return this->data;
}


std::string Node::setData() const {

    this -> data = value;
    return this -> data;
}


Node*::getNext() const{
    return this -> next;
}

void