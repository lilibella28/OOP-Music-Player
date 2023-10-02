#include "../../include/user-interface/UserInterface.h"
#include <iostream>
#include <string>

UserInterface::UserInterface() {}

void UserInterface::displayWelcomeMessage()
{
    std::cout << "---------------------------------------------- \n";
    std::cout << "   \U0001F3B5      Welcome to PlaylistPro \U0001F3B5   \n";
    std::cout << "---------------------------------------------- \n";
}

void UserInterface::displayMenuOptions()
{
    int userOption;
    std::cout << "--------------------------------- \n";
    std::cout << "           PlaylistPro Main Menu \n";
    std::cout << "-----------------------------------\n";
    std::cout << "1. 🎵 Play" << std::endl;
    std::cout << "2. ⏸ Pause" << std::endl;
    std::cout << "3. ⏭ Next Song" << std::endl;
    std::cout << "4. ⏮ Previous Song" << std::endl;
    std::cout << "5. 🎶 Display All Songs" << std::endl;
    std::cout << "6. 📂 Create Playlist" << std::endl;
    std::cout << "7. 📋 Display Playlists" << std::endl;
    std::cout << "8. 🗑 Remove Playlist" << std::endl;
    std::cout << "9. ➕ Add Song to Main Library" << std::endl;
    std::cout << "10. ➕ Add Song to Playlist" << std::endl;
    std::cout << "11. 🗑 Remove Song From Playlist" << std::endl;
    std::cout << "12. 🔀 Shuffle" << std::endl;
    std::cout << "13. 🔁 Repeat" << std::endl;
    std::cout << "14. 🚪 Exit" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
};

int UserInterface::getUserChoice()
{
    int choice;
    bool validChoice = false;

    while (!validChoice)
    {
        std::cout << "Ready to immerse yourself in the music? Choose an option: " << std::endl;
        std::cout << "🎵 ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 14)
        {
            validChoice = true;
        }
        else
        {
            std::cout << "Oops! That's not a valid option. Please select a number between 1 and 14." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return choice;
};

std::string UserInterface::createPlaylistInterface()
{

    std::string playlistName;
    std::cout << "Let's create something special! What's the name of your new playlist? 🎶" << std::endl;
    std::cout << "📝 ";
    std::cin >> playlistName;

    return playlistName;
};