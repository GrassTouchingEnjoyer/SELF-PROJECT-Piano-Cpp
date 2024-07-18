#include <iostream>
#include <conio.h>
#include <thread>
#include "note_getter.hpp"
#include "..\notes_folder\notes.hpp"


//_____________________________________________________________________________________________________________________________
notes* note_getter(){
	
   char  pressed_note = 0;

   notes *note = new notes(pressed_note,0); 

   std::cout << "Press a key: ";
        
    if (_kbhit())     // Check if a key is pressed 
    {
           
        pressed_note = _getch();    // Get the pressed key

        std::cout << pressed_note << std::endl;


		//_____________________decoding stage_____________________

            notes *note = new notes(pressed_note,0);              // decoding is while constructing thanks Mr. Petra

        //________________________________________________________


        delete note;//note->~notes();
            
        //std::cout << (*note).get_note();

    }

    return note;

}
//_____________________________________________________________________________________________________________________________



//________________________________________________________

void note_player(notes note){

    
    std::thread thread_player([&]() {

        note.play_note();

    });

    thread_player.detach();

}
//________________________________________________________

    
