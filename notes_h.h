#include <thread>



class notes
{

  private:      
//████████████████████████

  char note; 
  int  note_counter;

//████████████████████████







  public:
//██████████████████████████ Constructor - Destructor ████████████████████████████
      

        notes(char note, int counter);  // Constructor 

        ~notes();                       // Destructor


//________________________________________________________________________________






//█████████████████████████████ Getters - Setters ████████████████████████████████
              
// note___________________________________________________________________________

       void set_note(char new_note);//setter for note

       char get_note()const;//getter for note

// note_counter------------------------------------------------------------------

       void set_note_counter(char new_note_counter);//setter for note counter

       int get_note_counter();//getter for note counter

//________________________________________________________________________________



};

