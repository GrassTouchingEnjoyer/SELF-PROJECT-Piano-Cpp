#include <iostream>
#include <conio.h>

#include "note_getter.hpp"
#include "../notes_folder/notes.hpp"




int note_getter()
{

   char pressed_note;
   int  counter_index=0;

   std::cout << "Press a key: ";
    
   while (true) {
        
        if (_kbhit())                                            // Check if a key is pressed 
        {
           
            pressed_note = _getch();                             // Get the pressed key

            counter_index++;                                     // note index

            std::cout << pressed_note << std::endl;

            notes *note = new notes(pressed_note,counter_index);
            
            std::cout << (*note).get_note();

        }
    }

    return 0;
}

    
