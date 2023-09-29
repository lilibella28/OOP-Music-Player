#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <string>
#include "Node.h"



class PlayList{

    public:
        PlayList(const std::string& songTitle);

        // ADD, REMOVE, AND DISPLAY Playlist
        void addSong(const std::string& songTitle);
        void removeSong(const std::string& songTitle);
        void displayPlaying() const;


    private:
        Node* head;

};


#endif // PLAYLIST_H 
/*
Create the Playlist class to manage songs using a linked list.
Implement methods to add songs, remove songs, display the playlist, and navigate through songs.
Test the Playlist class with a few songs to ensure it works as expected.



*/










