#ifndef USERINTERFACE_H_INCLUDE
#define USERINTERFACE_H_INCLUDE
#include <string>


class UserInterface{


    public:
    UserInterface();
    void displayWelcomeMessage();
    void displayMenuOptions();
    int getUserChoice();
    static std::string createPlaylistInterface();

};








#endif // USERINTERFACE_H_INCLUDE