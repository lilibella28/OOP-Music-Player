#include "Song.h"
#include <iostream>
#include <string>

/*

Create the Song class with attributes like title, artist, duration, and a pointer to the next song.
Implement basic methods for creating and displaying songs.

// keep data private for Encapsulation
//keep member public

*/
Song::Song(std::string title, std::string artist)
{
}

void Song::createSong(std::string songTitle, std::string artistName)
{
    std::cout << "Enter song title: \n";
    std::cin >> songTitle;
    title = songTitle;

    std:: cout << "Enter artist name: \n";
    std::cin >> artistName;
    artist = artistName;

}

void Song::displayingSong(std::string songTitle, std::string artistName)
{
}
