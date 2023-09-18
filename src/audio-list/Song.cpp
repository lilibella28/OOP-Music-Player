#include "Song.h"
#include <iostream>
#include <string>

/*

Create the Song class with attributes like title, artist, duration, and a pointer to the next song.
Implement basic methods for creating and displaying songs.

// keep data private for Encapsulation
//keep member public

*/
Song::Song(const std::string& title, const std::string& artist): title(title), artist(artist)
{
}

Song Song::createSong()
{

    std::string songTitle,
    artistName;
    std::cout << "Enter song title: \n";
    std::cin >> songTitle;

    std::cout << "Enter artist name: \n";
    std::cin >> artistName;

    return Song(songTitle, artistName);
};

void Song::display() const
{
    std::cout << "Title:" << title << std::endl;
    std::cout << "Artist: " << artist << std::endl;
}
