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
Song::Song() : title(""), artist("")
{
}

Song Song::createSong()
{

    std::string songTitle,
    artistName;
    std::cout << "Enter song title: ";
    std::cin.ignore();
    std::getline(std::cin, songTitle);


    std::cout << "Enter artist name: \n";
    std::getline(std::cin, artistName);



    Song newSong;

    newSong.title = songTitle;
    newSong.artist = artistName;

    return newSong;

};

void Song::display() const
{
    std::cout << "Title: " << title << std::endl;
    std::cout << "Artist: " << artist << std::endl;
}
