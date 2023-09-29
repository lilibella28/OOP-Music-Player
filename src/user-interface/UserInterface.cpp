#include "../../include/user-interface/UserInterface.h"
#include <iostream>
#include <string>

UserInterface::UserInterface() {}

void UserInterface::displayWelcomeMessage()
{

    std::cout << "---------------------------------------------- \n";
    std::cout << "   \U0001F3B5      Welcome to Music Player \U0001F3B5   \n";
    std::cout << "---------------------------------------------- \n";
};
void UserInterface::displayMenuOptions()
{
    int userOption;
    std::cout << "--------------------------------- \n";
    std::cout << "           Main Menu \n";
    std::cout << "-----------------------------------\n";
    std::cout << "1. Play" << std::endl;
    std::cout << "2. Pause" << std::endl;
    std::cout << "3. Next Song" << std::endl;
    std::cout << "4. Previous Song" << std::endl;
    std::cout << "5. Display all Song" << std::endl;
    std::cout << "6. Create Playlist" << std::endl;
    std::cout << "7. Display Playlists" << std::endl;
    std::cout << "8. Remove Playlist" << std::endl;
    std::cout << "9. Add Song to the main library" << std::endl;
    std::cout << "10. Add Song to a Playlist" << std::endl;
    std::cout << "11. removeSongFromPlaylist" << std::endl;
    std::cout << "12. Shuffle" << std::endl;
    std::cout << "13. Repeat" << std::endl;
    std::cout << "14. Exit" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    // std::cin >> userOption;
};
int UserInterface::getUserChoice()
{
    int choice;
    bool validChoice = false;

    while (!validChoice)
    {
        std::cout << "Please choose an option: " << std::endl;
        std::cin >> choice;

        if (choice >= 1 && choice <= 14)
        {
            validChoice = true;
        }
        else
        {
            std::cout << "Invalid option." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return choice;
};

std::string UserInterface::createPlaylistInterface()
{

    std::string playlistName;
    std::cout << "Please enter your Playlist name: " << std::endl;
    std::cin >> playlistName;

    return playlistName;
};