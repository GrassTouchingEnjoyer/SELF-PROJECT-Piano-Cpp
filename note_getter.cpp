#include <iostream>
#include "notes_h.h"
#include <conio.h>

int note_getter()
{

    char ch;

    std::cout << "Press a key: ";

    while (true) {
        if (_kbhit()) {  // Check if a key is pressed
            ch = _getch();  // Get the pressed key




            std::cout << "Key pressed: " << ch << std::endl;
            
        }
    }


    return 1;
}

    