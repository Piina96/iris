#include <iostream> 
#include <string>  
#include "Learner.h" 

using namespace std; 

int main()
{
	Learner AI; 

	// looppi  
	for (;;)
	{
		std::cout << "\nYOU: "; 
		string phrase; 
		std::getline(cin, phrase); 

		std::cout << "IRIS: "; 
		AI.respond(phrase); 

	}

}