#include <iostream>
#include <conio.h>
#include <thread>
#include <queue>
#include "..\notes_folder\notes.hpp"
#include "note_getter.hpp"
#include <list>

/*
 	this main method will use a queue and two threads, one that places all the time new notes in the queue and 
	one that continually checks if there are notes in it, so that it makes SOUND THREADS

	LIKE scheduler only more manly

	main will be an infinite loop maybe add an escape key or something
*/

std::queue <notes*> note_queue;
std::list<std::thread*> thread_list;


//-------------------------------------------------------------

	void push_into_queue_thread(notes* note){

		if(note->get_note_decoded()!=0){
		
			note_queue.push(note);
		}

	}
//-------------------------------------------------------------



//---------------------------------------------
	void note_player_thread(notes* play_note){

		play_note->play_note();

		delete play_note;
	}
//----------------------------------------------



int main(){

	while (true)
	{

		if (_kbhit())     							   // Check if a key is pressed 
		{
			
			char pressed_note = _getch();    		   // Get the pressed key

			std::cout << pressed_note << std::endl;


		//_______________decoding stage______________

			notes *note = new notes(pressed_note,0);   // decoding is while constructing thanks Mr. Petra
        //___________________________________________


		push_into_queue_thread(note);


		if(!(note_queue.empty()))
		{	
                notes* play_note = note_queue.front();
                note_queue.pop();

                std::thread *note_thread = new std::thread(note_player_thread, play_note); // Pass pointer to note
				
				thread_list.push_back(note_thread);

                (*note_thread).detach();

		}
			

		//delete note; //note->~notes();

		//std::cout << (*note).get_note();
		}
	}

}
