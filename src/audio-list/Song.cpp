#include "../../include/audio-list/Song.h"
#include <iostream>
#include <string>
#include <iomanip>

/*
class Song Implementation
Create the Song class with attributes like title, artist, duration, and a pointer to the next song.
Implement basic methods for creating and displaying songs.

// keep data private for Encapsulation
//keep member public

*/
Song::Song(const std::string &title, const std::string &artist, int duration) : title(title), artist(artist), duration(duration), next(nullptr)
{
}

Song::Song() : next(nullptr) {}

// Song Song::createSong()
// {

//     std::string songTitle, artistName;
//     int songDuration;
//     std::cout << "Enter song title: ";
//     // std::cin.ignore();
//     std::cin >> songTitle;

//     std::cout << "Enter artist name: \n";
//     std::cin >> artistName;

//     std::cout << "Enter song duration: \n";
//     std::cin >> songDuration;
//     Song newSong = Song(songTitle, artistName, songDuration);
//     songs.push_back(newSong);
//     return newSong;
// };

Song *Song::getNextSong()
{

    return this->next;
};

void Song::setNextSong(Song *newSong)
{

    this->next = newSong;
}

void Song::displaySongInfo(const Song &song) const
{
   std::cout << std::left << std::setw(20) << "Title"
            << std::setw(30) << "Artist"
            << std::setw(15) << "Duration " << std::endl;
    std::cout << std::left << std::setw(20) << "--------------------"
            << std::setw(30) << "------------------------------"
            << std::setw(15) << "----------" << std::endl;
    std::cout << std::left << std::setw(20) << song.getTitle()
            << std::setw(30) << song.getArtistName()
            << std::setw(15) << song.getDuration() << std::endl;
}



std::string Song::getTitle() const
{
    return title;
}

std::string Song::getArtistName() const
{
    return artist;
}

int Song::getDuration() const
{

    return duration;
}
