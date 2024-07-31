#include "debugger.h"

int main(){

    keys key = initializeKeys();
    setUpQandA();
    Menu_t myMenu = initializeMenu();
    cursor_t cursor = initializeCursor();
    recents_t recents = initializeRecents();
    menu(myMenu, cursor, key, recents);
    while(1)
    {
    updateKeys(key);
    if(keyPressed(key)) {system("cls"); /*printKeys(key);*/ menu(myMenu, cursor, key, recents);}
    flushKeys(key);
    }
    return 0;
}