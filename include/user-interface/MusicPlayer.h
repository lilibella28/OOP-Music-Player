#ifndef MUSICPLAYER_H_INCLUDE
#define MUSICPLAYER_H_INCLUDE
#include <iostream>
#include <string>
#include "../audio-list/Song.h"
#include "../audio-list/Playlist.h"

/**
 * @file MusicPlayer.h
 * @brief MusicPlayer class, which represents a music player application.
 * 
 * The MusicPlayer class provides playing, managing, and controlling music playback features.
 * It allows users to create playlists, add and remove songs, control playback,
 *  and perform various music-related operations.
 * 
 * Note: This class assumes that the Song and Playlist classes are defined elsewhere
 * and accessible through inclusion.
 * 
 * *  Features: 
 *  - Play, pause, and skip to the next or previous song.
 *  - Create and manage playlists with custom names.
 *  - Add songs to playlists and remove songs from playlists. 
 *  - Shuffle and repeat songs or playlists. 
 *  - Search for specific songs within the library.
 * 
 * Usage Example:
 * 
 * MusicPlayer player; // create a MusicPlayer instance
 * 
 * Add songs tto the playList
 * 
 * Song song1("Song 1", "Artist A", 180);
 * Song song2("Song 2", "Artist B", 240);
 * player.addToLibrary(song1);
 * player.addToLibrary(song2);
 *
 * // Create a playlist and add songs to it
 * player.createPlaylist("My Playlist");
 * player.addSongToPlaylist(song1, "My Playlist");
 *
 * // MusicPlayer Controlles 
 * player.play();
 * player.pause();
 * player.nextSong();




*/
class MusicPlayer{


    public:
    MusicPlayer();
    void runMusicPlayer();
    void handlerUserChoice(int& choice);
    
    void play();
    void pause();
    void nextSong();
    void previousSong();
    void createPlaylist();
    void displayPlaylists() const;
    void displayAllSong();
    void removePlaylist(const PlayList& playlist);
    void addSong();
    void removeSongFromPlaylist();

    void shuffle();
    void repeat();
    
    // template<>
    // std::vector<Song> search(const std::string& query);

    void exit();

    
    private:
    Song currentSong;
    PlayList playlist;


};







#endif // MUSICPLAYER_H_INCLUDE