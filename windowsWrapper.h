#include <windows.h>
#include <iostream>

#define NumLetters 26
#define NumNumbers 10
#define NumArrows 4
#define NumMouse 2

#define LetterStart 0x41
#define NumStart 0x30
#define NumKeyStart 0x60
#define ArrowStart 0x25
#define MouseStart 0x01

struct keys
{
    bool letters[NumLetters];
    bool numbers[NumNumbers];
    bool arrows[NumArrows];
    bool mouse[NumMouse];
    bool enter;
};

void updateKeys(keys &key);
void printKeys(keys &key);
keys initializeKeys();
void flushKeys(keys &key);
bool keyPressed(keys &key);
