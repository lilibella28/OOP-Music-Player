#include "../include/audio-list/Song.h"
#include "../include/audio-list/Playlist.h"
#include <iostream>



int main(){
    Song mySong = mySong.createSong();
    PlayList myPlaylist(mySong.getTitle());
    myPlaylist.displayPlaying();
    mySong.display();
    return 0;
}