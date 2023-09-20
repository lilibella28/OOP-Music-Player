#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <string>


// Node interface
class SongNode{

    public:
    // constructor
    SongNode(std::string value);

    //setter and getters 

    const std::string& getData() const;
    void setData(const std::string& value) ;
    //getData return data
    //setdata data = value;

    // getNext return next node
    SongNode* getNext() const;

    //setNode Node* node , next=node
    void setNode(SongNode* node);

    private:
    std::string data;
    Node* next;
};


class Playlist{

    public:
        Playlist();

        // ADD, REMOVE, AND DISPLAY Playlist
        void addSong(const std::string& songTitl);
        void removeSong(const std::string& songTitle);
        void displayPlaying() const;


    private:
        SongNode* head;

};


#endif // PLAYLIST_H 
/*
Create the Playlist class to manage songs using a linked list.
Implement methods to add songs, remove songs, display the playlist, and navigate through songs.
Test the Playlist class with a few songs to ensure it works as expected.



*/










