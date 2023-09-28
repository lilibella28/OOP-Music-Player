#include "../../include/audio-list/Song.h"
#include <iostream>
#include <string>

/*
class Song Implementation
Create the Song class with attributes like title, artist, duration, and a pointer to the next song.
Implement basic methods for creating and displaying songs.

// keep data private for Encapsulation
//keep member public

*/
Song::Song(const std::string& title, const std::string& artist, int duration) : title(title), artist(artist), duration(duration), next(nullptr)
{
}

Song::Song() : next(nullptr){}

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

Song* Song::getNextSong(){

    return this ->next;

};

void Song::setNextSong(Song* newSong){

    this ->next = newSong;
}

void Song::displaySongInfo(const Song& song) const
{
    std::cout << "Title: " << song.getTitle() << std::endl;
    std::cout << "Artist: " << song.getArtistName() << std::endl;
    std::cout << "Duration: " << song.getDuration() << " seconds" << std::endl;
}

// void Song::displayAllSong() const {
//     if(songs.empty()){
//         std::cout << "Not Songs avalaible" << std::endl;
//     }
//     std::cout << "Songs:" << std::endl;
//     for(const Song& song: songs){
//         song.displaySongs(song);
//     }

// }

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