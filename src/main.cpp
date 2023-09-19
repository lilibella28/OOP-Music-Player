#include "../include/audio-list/Song.h"
#include <iostream>



int main(){
    Song Sza("Weekend", "saturday");
    Song Adele("Hello", "Adele 25");
    Adele.display();
    Sza.display();
    Adele.createSong();
    return 0;
}