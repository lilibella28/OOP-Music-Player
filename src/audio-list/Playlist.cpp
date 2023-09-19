#include "../../include/audio-list/Playlist.h"
#include <iostream>
#include <string>

Node::Node(std::string value) : data(value), next(nullptr){};

std::string Node::getData() const
{

    return this->data;
}
