#include "windowsWrapper.h"

void updateKeys(keys &key)
{
    static bool debounceLetters[NumLetters];
    for(int i=0;i<NumLetters;i++)
    {
        if(GetAsyncKeyState((LetterStart+i))<0)
        {
            if(debounceLetters[i])
            {
                key.letters[i]=0;
            }
            else
            {
                debounceLetters[i]=1;
                key.letters[i]=1;
            }
        }
        else debounceLetters[i]=0;
    }

    static bool debounceNumbers[NumNumbers];
    for(int i=0;i<NumNumbers;i++)
    {
        if(GetAsyncKeyState((NumStart+i))<0 || GetAsyncKeyState((NumKeyStart+i))<0)
        {
            if(debounceNumbers[i])
            {
                key.numbers[i]=0;
            }
            else
            {
                debounceNumbers[i]=1;
                key.numbers[i]=1;
            }
        }
        else debounceNumbers[i]=0;
    }

    static bool debounceArrows[NumArrows];
    for(int i=0;i<NumArrows;i++)
    {
        if(GetAsyncKeyState((ArrowStart+i))<0)
        {
            if(debounceArrows[i])
            {
                key.arrows[i]=0;
            }
            else
            {
                debounceArrows[i]=1;
                key.arrows[i]=1;
            }
        }
        else debounceArrows[i]=0;
    }

    static bool debounceMouse[NumMouse];
    for(int i=0;i<NumMouse;i++)
    {
        if(GetAsyncKeyState((MouseStart+i))<0)
        {
            if(debounceMouse[i])
            {
                key.mouse[i]=0;
            }
            else
            {
                debounceMouse[i]=1;
                key.mouse[i]=1;
            }
        }
        else debounceMouse[i]=0;
    }

    static bool debounceEnter;
    if(GetAsyncKeyState(0x0D)<0)
    {
        if(debounceEnter)
        {
            key.enter=0;
        }
        else
        {
            debounceEnter=1;
            key.enter=1;
        }
    }
    else debounceEnter=0;
}

void printKeys(keys &key)
{
    for(int i=0;i<NumLetters;i++)
    {
        char var=0x41+i;
        if(key.letters[i])
            std::cout<<var<<std::endl;
    }

    for(int i=0;i<NumNumbers;i++)
    {
        if(key.numbers[i])
            std::cout<<i<<std::endl;
    }

    if(key.arrows[0]) std::cout<<"Left"<<std::endl;
    if(key.arrows[1]) std::cout<<"Up"<<std::endl;
    if(key.arrows[2]) std::cout<<"Right"<<std::endl;
    if(key.arrows[3]) std::cout<<"Down"<<std::endl;

    if(key.mouse[0]) std::cout<<"Left"<<std::endl;
    if(key.mouse[1]) std::cout<<"Right"<<std::endl;

    if(key.enter) std::cout<<"Enter"<<std::endl;
}

keys initializeKeys()
{
    keys key;

    for(int i=0;i<NumLetters;i++)
        key.letters[i]=0;

    for(int i=0;i<NumNumbers;i++)
        key.numbers[i]=0;

    for(int i=0;i<NumArrows;i++)
        key.arrows[i]=0;

    for(int i=0;i<NumMouse;i++)
        key.mouse[i]=0;

    key.enter=0;

    return key;
}

void flushKeys(keys &key)
{
    for(int i=0;i<NumLetters;i++)
        key.letters[i]=0;

    for(int i=0;i<NumNumbers;i++)
        key.numbers[i]=0;

    for(int i=0;i<NumArrows;i++)
        key.arrows[i]=0;

    for(int i=0;i<NumMouse;i++)
        key.mouse[i]=0;

    key.enter=0;
}

bool keyPressed(keys &key)
{
    for(int i=0;i<NumLetters;i++)
        if(key.letters[i]) return 1;
    for(int i=0;i<NumNumbers;i++)
        if(key.numbers[i]) return 1;
    for(int i=0;i<NumArrows;i++)
        if(key.arrows[i]) return 1;
    for(int i=0;i<NumMouse;i++)
        if(key.mouse[i]) return 1;

    if(key.enter) return 1;
    
    return 0;
}
