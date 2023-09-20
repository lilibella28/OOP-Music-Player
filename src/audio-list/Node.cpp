#include "../../include/audio-list/Node.h"
#include <iostream>
#include <string>


// SongNode Implementations
Node::Node(const std::string& value) : data(value), next(nullptr){};

const std::string& Node::getData() const
{

    return data;
}

void Node::setData(const std::string& value)
{

    data = value;
    
}

Node * Node::getNext()
{
    return this-> next;
}

void Node::setNode(Node* node)
{

    this -> next = node;
}