#include "Voice.h"
#include <iostream> 
#include <string>
#include <windows.h>


using namespace std; 

Voice::Voice()
{
}


Voice::~Voice()
{
} 

void Voice::say(string phrase)
{
	string command = "espeak \"" + phrase + "\"";  

	const char* charCommand = command.c_str(); 
	cout << phrase << endl; 
	system(charCommand); 
}
