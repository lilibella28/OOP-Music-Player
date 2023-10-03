#include "../../include/audio-list/Playlist.h"
#include "../../include/audio-list/Song.h"
#include "../../include/user-interface/UserInterface.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <vector>

PlayList::PlayList(const std::string &playlistName) : playlistName(playlistName), head(nullptr), next(nullptr) {}
PlayList::PlayList() : playlistName(""), head(nullptr), next(nullptr) {}

/**
 * @brief return playlist name .
 * **/
std::string PlayList::getPlaylistName() const
{
    return playlistName;
}
/**
 * @brief  create a playlist name
 * **/
void PlayList::createPlaylist()
{

    UserInterface playlistName;//taking the iinterface to prompt user
    std::string name = playlistName.createPlaylistInterface();
    PlayList *newPlaylistName = new PlayList(name);
    newPlaylistName->next = this->next;
    this->next = newPlaylistName;
}

/**
 * @brief Display all the playlist users has created
 * **/
void PlayList::displayAllPlaylist() const
{
    std::cout << "Playlist" << std::endl;
    PlayList *currentPlaylistName = this->next;
    while (currentPlaylistName != nullptr)
    {
        std::cout << currentPlaylistName->playlistName << std::endl;
        currentPlaylistName = currentPlaylistName->next;
    }
}

/**
 * @brief remove playlist
 * **/
void PlayList::removePlaylist(PlayList &playlistNameToRemove) 
{
    if (next && next->playlistName == playlistNameToRemove.getPlaylistName())
    {
        PlayList *oldPlayList = next;
        next = next->next;
        delete oldPlayList;
        return;
    }

    PlayList *currentPlaylist = next;
    PlayList *previousPlaylist = nullptr;

    while (currentPlaylist && currentPlaylist->playlistName != playlistNameToRemove.getPlaylistName())
    {
        previousPlaylist = currentPlaylist;
        currentPlaylist = currentPlaylist->next;
    }
}

/**
 * @brief add song to main Playlist
 * **/
void PlayList::addSong(const Song &song)
{
    Song *newSong = new Song(song); // dynamic memory allocation, and create an objects with it
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

/**
 * @brief remove song to main Playlist
 * **/
void PlayList::removeSongFromPlaylist()
{
    if (head) //check is there a head, and if true remove it
    {
        Song *old = head;
        head = old->getNextSong();
        delete old;
    }
}

/**
 * @brief shuffle song to main Playlist
 * **/
void PlayList::shuffle()
{
    if (!head)
    {
        std::cout << "Playlist is empty. \n";
        return;
    }
    //vector to store songs and shuffled songs
    std::vector<Song *> shuffledSongs;
    Song *currentSong = head;

    while (currentSong)
    {

        shuffledSongs.push_back(currentSong);
        currentSong = currentSong->getNextSong();
    }
    //Random shuffles the song inside the vector
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(shuffledSongs.begin(), shuffledSongs.end(), g);
    
    clearPlaylist();
    for (Song *song : shuffledSongs)
    {
        addSong(*song); // add song back to the LinkedList
    }
    displayPlaying();
}

/**
 * @brief repeat song 
 * **/
void PlayList::repeat() const {

};
void PlayList::displayPlaying() const
{
    if (!head) //check it there is an element in the playlist
    {
        std::cout << "There is not song" << std::endl;
    }
    else
    {

        Song *currentSong = head; //initiate an objects of the song
        while (currentSong)
        {
            currentSong->displaySongInfo(*currentSong);
            currentSong = currentSong->getNextSong();
        }
    }
}

void PlayList::play() const {
    if(!head){
        std::cout << "Playlist is empty. Cannot play any song.\n";
        return;
    }
    std::cout << "Now Playing: " << head ->getTitle() << " By " << head ->getArtistName() << std::endl;
    }

/**
 * @brief search song by name
 * **/
void PlayList::search(std::string song){

};


/**
 * @brief clear PlayList
 * **/
void PlayList::clearPlaylist(){
    
    while (head)
    {
        Song *temp = head;
        head = head->getNextSong();
        delete temp;
    }

}

/**
 * @brief PlayList desctructor 
 **/
PlayList::~PlayList()
{

    clearPlaylist();
}