#ifndef NODE_H
#define NODE_H
#include <string>


// Node interface
class Node{

    public:
    // constructor
    Node(std::string value);

    //setter and getters 

    const std::string& getData() const;
    void setData(const std::string& value) ;
    //getData return data
    //setdata data = value;

    // getNext return next node
    Node* getNext() const;

    //setNode Node* node , next=node
    void setNode(SongNode* node);

    private:
    std::string data;
    Node* next;
};
#endif //NODE_H