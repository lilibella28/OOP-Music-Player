
#ifndef SONG_H
#define SONG_H

#include <string>



class Song
{

public:
    Song(std::string title, std::string artist);
    void createSong(std::string songTitle, std::string artistName);
    void displayingSong(std::string songTitle, std::string artistName);

private: //keep data private(encapsulation)
    std::string title;
    std::string artist;
    double duration;
};

#endif // SONG_H