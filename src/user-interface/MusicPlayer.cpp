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
    playlist.play();
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
    playlist.displayAllPlaylist();
}

/**
 * @brief  remove  playlist.
 */
void MusicPlayer::removePlaylist(PlayList &playlist){

};

/**
 * @brief Add song to the main library.
 */
void MusicPlayer::addSong()
{
    std::string songTitle, artistName;
    int songDuration;

    // Prompt the user for song details
    std::cout << "🎵 Let's add a new song to your library! 🎵\n";

    // Get the song title
    std::cout << "Enter the title of the song: ";
    std::getline(std::cin >> std::ws, songTitle);

    // Get the artist name
    std::cout << "Enter the name of the artist or band: ";
    std::getline(std::cin >> std::ws, artistName);

    // Get the song duration
    std::cout << "Enter the duration of the song (in seconds): ";
    std::cin >> songDuration;

    // Display a friendly message
    std::cout << "🎉 Song '" << songTitle << "' by " << artistName << " added to your library! 🎉\n";

    Song newSong(songTitle, artistName, songDuration);

    playlist.addSong(newSong);
    currentSong = newSong;
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
    // std::cout << "----------------------------------------------" << std::endl;
    // std::cout << "  shuffle, Thank you for  Music Player" << std::endl;
    // std::cout << "----------------------------------------------" << std::endl;
    playlist.shuffle();
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
   UserInterface exitMessage;
   exitMessage.exit();
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
    bool displayMenu = true;
    UserInterface menu;
    menu.displayWelcomeMessage();

    while (keepAdding)
    {
        if(displayMenu){
        menu.displayMenuOptions();
        displayMenu = false;
        }
        choice = menu.getUserChoice();
        this->handlerUserChoice(choice);

        if(menu.askToShowMenu()){
            displayMenu = true;
        }
        else{
            keepAdding = false;
            menu.exit();
        }
    }
}
