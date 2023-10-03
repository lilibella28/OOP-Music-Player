#ifndef USERINTERFACE_H_INCLUDE
#define USERINTERFACE_H_INCLUDE
#include <string>


class UserInterface{


    public:
    UserInterface();
    void displayWelcomeMessage();
    void displayMenuOptions();
    int getUserChoice();
    void exit();
    bool askToShowMenu();
    static std::string createPlaylistInterface();

};








#endif // USERINTERFACE_H_INCLUDE