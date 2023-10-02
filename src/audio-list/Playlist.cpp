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

std::string PlayList::getPlaylistName() const
{
    return playlistName;
}
void PlayList::createPlaylist()
{

    UserInterface playlistName;
    std::string name = playlistName.createPlaylistInterface();
    PlayList *newPlaylistName = new PlayList(name);
    newPlaylistName->next = this->next;
    this->next = newPlaylistName;
}

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
{
    if (head)
    {
        Song *old = head;
        head = old->getNextSong();
        delete old;
    }
}
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
    std::random_shuffle(shuffledSongs.begin(), shuffledSongs.end());

    removeSongFromPlaylist();
    for (Song *song : shuffledSongs)
    {
        addSong(*song); // add song back to the LinkedList
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

    while (head)
    {
        Song *temp = head;
        head = head->getNextSong();
        delete temp;
    }
}