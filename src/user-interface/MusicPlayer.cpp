#include "../../include/user-interface/MusicPlayer.h"
#include "../../include/user-interface/UserInterface.h"
#include <iostream>
#include <string>

MusicPlayer::MusicPlayer() : currentSong("Hello", "Adele", 180), playlist() {}

/**
 * @brief Play the current song.
 */
void MusicPlayer::play()
{
    std::cout << "I am playing \n";
    Song mySong;
    mySong.displaySongInfo(currentSong);
};

/**
 * @brief Pause the current song.
 */
void MusicPlayer::pause()
{
    std::cout << "I a pause .... \n";
};
/**
 * @brief Play the next song.
 */
void MusicPlayer::nextSong()
{
    std::cout << "---------------------------------------------- \n";
    std::cout << "  Next Song, Thank you for  Music Player \n";
    std::cout << "---------------------------------------------- \n";
    if (currentSong.getNextSong() != nullptr)
    {
        currentSong.displaySongInfo(*currentSong.getNextSong());
    }
    else
    {
        std::cout << "There is not nextSong avalaible" << std::endl;
    }
};
/**
 * @brief Pause the previous song.
 */
void MusicPlayer::previousSong()
{
    std::cout << "---------------------------------------------- \n";
    std::cout << "  previous, Thank you for  Music Player \n";
    std::cout << "---------------------------------------------- \n";
};

/**
 * @brief  create a playlist.
 */
void MusicPlayer::createPlaylist()
{

    playlist.createPlaylist();
}

/**
 * @brief display all the libraries user have create

*/
void MusicPlayer::displayPlaylists() const
{
}

/**
 * @brief  remove  playlist.
 */
void MusicPlayer::removePlaylist(const PlayList &playlist){

};

/**
 * @brief Add song to the main library.
 */
void MusicPlayer::addSong()
{
    std::string songTitle, artistName;
    int songDuration;
    std::cout << "Enter song title: ";
    // std::cin.ignore();
    std::cin >> songTitle;

    std::cout << "Enter artist name: \n";
    std::cin >> artistName;

    std::cout << "Enter song duration: \n";
    std::cin >> songDuration;
    Song newSong(songTitle, artistName, songDuration);

    playlist.addSong(newSong);
    currentSong = newSong;
    playlist.displayPlaying();
};

void MusicPlayer::displayAllSong()
{

    playlist.displayPlaying();
}

/**
 * @brief remove song from  a playlist.
 * 
 */

void MusicPlayer::removeSongFromPlaylist()
{
    playlist.removeSongFromPlaylist();
};

/**
 * @brief Shuffle the current playlist.
 */
void MusicPlayer::shuffle()
{
    std::cout << "---------------------------------------------- \n";
    std::cout << "  shuffle, Thank you for  Music Player \n";
    std::cout << "---------------------------------------------- \n";
};
/**
 * @brief repeat playlist song.
 */
void MusicPlayer::repeat()
{
    std::cout << "---------------------------------------------- \n";
    std::cout << "  Bye, Thank you for  Music Player \n";
    std::cout << "---------------------------------------------- \n";
};

/**
 * @brief exit the music player app.
 */
void MusicPlayer::exit()
{
    std::cout << "---------------------------------------------- \n";
    std::cout << "  Bye, Thank you for  Music Player \n";
    std::cout << "---------------------------------------------- \n";
};

/**
 * @brief handler user choices
 */
void MusicPlayer::handlerUserChoice(int &choice)
{
    switch (choice)
    {
    case 1:
        this->play();
        break;

    case 2:
        this->pause();
        break;
    case 3:
        this->nextSong();
        break;
    case 4:
        this->previousSong();
        break;
    case 5:
        this->displayAllSong();
        break;
    case 6:
        this->createPlaylist();
        break;
    case 7:
        this->displayPlaylists();
        break;
    case 8:
        this->removePlaylist(playlist);
        break;

    case 9:
        this->addSong();
        break;
    case 10:
        this->addSong();
        break;
    case 11:
        this->removeSongFromPlaylist();
        break;
    case 12:
        this->shuffle();
        break;
    case 13:
        this->repeat();
        break;
    case 14:
        this->exit();
        break;
    default:
        break;
    }
}

/**
 * @brief musicPlayer main method.
 */
void MusicPlayer::runMusicPlayer()
{
    int choice;
    bool keepAdding = true;
    UserInterface menu;
    menu.displayWelcomeMessage();

    while (keepAdding)
    {
        menu.displayMenuOptions();
        choice = menu.getUserChoice();
        this->handlerUserChoice(choice);

        if (choice == 14)
        {
            break;
        }
    }
}
