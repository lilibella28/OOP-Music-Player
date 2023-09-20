#include "../../include/audio-list/Node.h"
#include <iostream>
#include <string>


// SongNode Implementations
Node::Node(std::string value) : data(value), next(nullptr){};

std::string Node::getData() const
{

    return data;
}

void Node::setData(const std::string& value)
{

    data = value;
    
}

Node * ::getNext() const
{
    return next;
}

void Node::setNode(SongNode* node) const
{

    return this->next = node;
}