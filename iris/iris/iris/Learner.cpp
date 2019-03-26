#include "Learner.h"
#include <iostream> 
#include <string>
#include <fstream>


using namespace std; 
Learner::Learner()
{
}

Learner::~Learner()
{
}


void Learner::respond(string phrase)
{ 
	fstream memory; 
	memory.open("memory.txt", ios::in); 

	// Tutki koko memory-file vastausta
	while (!memory.eof())
	{
		string identifier; 
		
		getline(memory, identifier); 
		
		if (identifier == phrase)
		{
			string response;
			getline(memory, response); 
			 
			voice.say(response); 
			return; 
		}
	}
	memory.close(); 

	memory.open("memory.txt", ios::in | ios::app); 
	memory << phrase << endl; // Tallenna muistiin 

	voice.say(phrase); 
	string userResponse; 
	std::cout << "YOU: "; 
	
	getline(cin, userResponse); 
	
	memory << userResponse << endl; 
	memory.close(); 

}

void Learner::say(string phrase)
{
	this->voice.say(phrase);
}
