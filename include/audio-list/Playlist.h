#ifndef PLAYLIST_H_INCLUDE
#define PLAYLIST_H_INCLUDE
#include "Song.h"
#include "Node.h"



class PlayList{

    public:
        PlayList(const std::string& playlistName);
        PlayList();
        // ADD, REMOVE, AND DISPLAY Playlist
        static PlayList createPlaylist();
        void displayPlaylists() const;
        void removePlaylist(const PlayList &playlistName);
        void addSong(const Song &song);
        void removeSongFromPlaylist();
        void shuffle();
        void repeat() const; 
        void displayPlaying() const;
        void search(std::string song);
        PlayList* nextSong();
    

        // Destructor 
        ~PlayList();


    private:
        std::string playlistName;
        Song* head;
        PlayList* next;

    
    


};


#endif // PLAYLIST_H_INCLUDE
/*
Create the Playlist class to manage songs using a linked list.
Implement methods to add songs, remove songs, display the playlist, and navigate through songs.
Test the Playlist class with a few songs to ensure it works as expected.



*/










