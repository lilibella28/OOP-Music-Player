#ifndef PLAYLIST_H, NODE_H
#define PLAYLIST_H, NODE_H
#include <string>


// Node interface
class Node{

    public:
    // constructor
    Node(std::string value);

    //setter and getters 

    std::string getData() const;
    std::string setData() const;
    //getData return data
    //setdata data = value;

    // getNext return next node
    Node* getNext() const;

    //setNode Node* node , next=node
    void setNode(Node* node) const;

    private:
    std::string data;
    Node* next;
};


class Playlist{

    public:
        Playlist();

        // ADD, REMOVE, AND DISPLAY Playlist
        void addSong();
        void removeSong();
        void displaySong();


    private:
        Node* head;

}

/*
Create the Playlist class to manage songs using a linked list.
Implement methods to add songs, remove songs, display the playlist, and navigate through songs.
Test the Playlist class with a few songs to ensure it works as expected.



*/










#endif // PLAYLIST_H NODE_H