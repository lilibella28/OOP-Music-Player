#include <iostream>
#include <string>

/*

Create the Song class with attributes like title, artist, duration, and a pointer to the next song.
Implement basic methods for creating and displaying songs.

// keep data private for Encapsulation
//keep member public

*/


class Song
{
    private: //keep data private(encapsulation)
    std::string title;
    std::string artist;
    double duration;
    
    public:
    void createSong(std::string songTitle, std::string artistName);
    void displayingSong(std::string songTitle, std::string artistName);

};


void Song::createSong(std::string songTitle, std::string artistName){

}

void Song::displayingSong(std::string songTitle, std::string artistName){

}



