#include <iostream>
#include "notes.hpp"



//██████████████████████████ Constructor - Destructor ████████████████████████████
//--------------------------------------------------------------------------------

   notes::notes(char init_note, int init_counter){        // Constructor

      note = init_note;
      note_counter = init_counter;

   } 
//--------------------------------------------------------------------------------

   notes::~notes(){                                       //Destructor

        
      std::cout << "note deleted";

   }                         
//--------------------------------------------------------------------------------
//█████████████████████████████ Getters - Setters ████████████████████████████████

// note---------------------------------------------------------------------------

      void notes::set_note(char new_note){                //setter for note
         
        note = new_note;

      } 



      char notes::get_note()const{                        //getter for note
        
        return note;

      } 

// note_counter-------------------------------------------------------------------

      void notes::set_note_counter(char new_note_counter){ //setter for note counter

        note_counter = new_note_counter;

      }



      int notes::get_note_counter(){                      //getter for note counter

        return note_counter;

      }
//_________________________________________________________________________________



