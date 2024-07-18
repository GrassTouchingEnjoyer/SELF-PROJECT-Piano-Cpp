#include <Windows.h>
#include <mmsystem.h>
#include <cstring>
#include <string.h>
#include <iostream>
#include "notes.hpp"


/*
  is used to instruct the linker to 
  add the winmm.lib library to the list of 
  libraries that it should link 
  against when building the program
*/
  #pragma comment(lib,"winmm.lib")




//██████████████████████████ Constructor - Destructor ████████████████████████████
//--------------------------------------------------------------------------------
   notes::notes(){                                        // Constructor

      note = 0;
      note_decoded = nullptr;
      note_counter = 0;

   } 

   notes::notes(char init_note, int init_counter){        // Constructor

      note = init_note;
      note_decoded = look_for_note(init_note);
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

// note_decoded-------------------------------------------------------------------

      char* notes::get_note_decoded(){                     //getter for note
        
        return note_decoded;

      } 

//_________________________________________________________________________________
//███████████████████████████████ thread operation ████████████████████████████████

      void notes::play_note(){ // 

      //look_for_note(play_note);
      
      PlaySound(TEXT("heavy laugh 2.wav"),NULL,SND_FILENAME);

      }

// DECODER -------------------------------------------------------------------

 //DECODER SET => {1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./}

      char* notes::look_for_note(char play_note){  
          
          char* decoded_play_note = "a";
          /*
              REMINDER:

              the operating system does not allow for files with *"/ characters so I gotta find a way to name them like this and decode
              then decode the character out ouf the file name maybe like this

              I found a solution, windows allows ascii art SO I WILL DO THIS FOR 

              {/\:?*<>|}

             / ==  █

             \ ==  ██

             : ==  ███

             ? ==  ████

             < ==  █████

             > ==  ██████

             * ==  ███████

             | ==  ████████

             " ==  █████████

          */

          return decoded_play_note;
 
       }