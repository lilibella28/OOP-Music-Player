#include "../../include/audio-list/Playlist.h"
#include "../../include/audio-list/Song.h"
#include "../../include/user-interface/UserInterface.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <vector>

PlayList::PlayList(const std::string &playlistName) : playlistName(playlistName), head(), next(nullptr) {}
PlayList::PlayList() : playlistName(""), head(), next(nullptr) {}

PlayList PlayList::createPlaylist()
{

    UserInterface playlistName;
    std::string name = playlistName.createPlaylistInterface();
    return PlayList(name);
}

PlayList *PlayList::nextSong()
{
    return this ->next;
}

void PlayList::removePlaylist(const PlayList &playlistName){

};

void PlayList::displayPlaylists() const
{

    std::cout << playlistName << std::endl;
};

void PlayList::addSong(const Song &song)
{
    Song *newSong = new Song(song);
    if (!head)
    {
        head = newSong;
    }
    else
    {
        Song *currentSong = head;

        while (currentSong->getNextSong())
        {
            currentSong = currentSong->getNextSong();
        }

        currentSong->setNextSong(newSong);
    }
}

void PlayList::removeSongFromPlaylist()
{  if(head){
    Song* old =head;
    head = old ->getNextSong();
    delete old;
}
}
void PlayList::shuffle(){
    if(!head){
        std::cout << "Playlist is empty. \n";
        return;
    }
        //vector to store songs and shuffled songs
        std::vector<Song*> shuffledSongs;
        Song* currentSong = head;

        while(currentSong){

            shuffledSongs.push_back(currentSong);
            currentSong = currentSong ->getNextSong();
        }
        //Random shuffles the song inside the vector 
        std::random_shuffle(shuffledSongs.begin(), shuffledSongs.end()); 

        removeSongFromPlaylist();
        for(Song* song: shuffledSongs){
            addSong(*song);// add song back to the LinkedList
            
        }
        displayPlaying();
    }


void PlayList::repeat() const {

};
void PlayList::displayPlaying() const
{
    if (!head)
    {
        std::cout << "There is not song" << std::endl;
    }
    else
    {

        Song *currentSong = head;
        while (currentSong)
        {
            currentSong->displaySongInfo(*currentSong);
            currentSong = currentSong->getNextSong();
        }
    }
}

void PlayList::search(std::string song){

};

PlayList::~PlayList()
{

    // while (head)
    // {
    //     Song* temp = head;
    //     head = head->next;
    //     delete temp;
    // }
}