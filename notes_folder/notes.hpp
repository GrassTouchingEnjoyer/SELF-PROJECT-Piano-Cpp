#pragma once


class notes
{

  private:      

  char  note; 
  char* note_decoded;
  int   note_counter;




  public:
//██████████████████████████ Constructor - Destructor ████████████████████████████
      
        notes();                                       // Constructor 
        notes(char note, int counter);                 // Constructor 

        ~notes();                                      // Destructor

//________________________________________________________________________________

//█████████████████████████████ Getters - Setters ████████████████████████████████
              
// note___________________________________________________________________________

       void set_note(char new_note);                     //setter for note

       char get_note()const;                             //getter for note

// note_counter------------------------------------------------------------------

       void set_note_counter(char new_note_counter);     //setter for note counter

       int get_note_counter();                           //getter for note counter

// note decoded___________________________________________________________________
       char *get_note_decoded();

//________________________________________________________________________________
 // ███████████████████████████████ thread operation ████████████████████████████████

       void play_note();

       char *look_for_note(char play_note);
};
