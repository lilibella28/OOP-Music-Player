
#ifndef SONG_H_INCLUDE
#define SONG_H_INCLUDE

#include <string>
#include <vector>
// Song Class interface

class Song
{

public:
    // Constructor
    Song(const std::string& title, const std::string& artist, int duration);
    Song();

    
    std::string getTitle() const;
    std::string getArtistName() const;
    int getDuration() const;
    void displaySongInfo(const Song& song) const;
    Song* getNextSong();
    void setNextSong(Song* newSong);

     //pointer to the next song
    

private: //keep data private(encapsulation)
    std::string title;
    std::string artist;
    int duration;
    Song* next;
    // double duration;
};

#endif // SONG_H_INCLUDE