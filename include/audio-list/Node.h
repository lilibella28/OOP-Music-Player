#ifndef NODE_H_INCLUDE
#define NODE_H_INCLUDE
#include <string>


// Node interface
class Node{

    public:
    // constructor
    Node( const std::string& value);

    //setter and getters 

    const std::string& getData() const;
    void setData(const std::string& value) ;
    //getData return data
    //setdata data = value;

    // getNext return next node
    Node* getNext();

    //setNode Node* node , next=node
    void setNode(Node* node);

    private:
    std::string data;
    Node* next;
};
#endif //NODE_H_INCLUDE