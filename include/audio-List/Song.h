
#ifndef SONG_H
#define SONG_H

#include <string>

// Song Class interface

class Song
{

public:
    Song();
    static Song createSong();
    void display() const;

private: //keep data private(encapsulation)
    std::string title;
    std::string artist;
    // double duration;
};

#endif // SONG_H