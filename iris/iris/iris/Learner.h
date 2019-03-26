#ifndef _LEARNER_H
#define _LEARNER_H 

#include <iostream> 
#include <fstream> 
#include "voice.h"


using namespace std; 


class Learner
{
public: 
	Learner();
	~Learner();

	void respond(string phrase); 
	void say(string phrase); 

	 Voice voice;    // The learner's voice that will audibly communicate a response
};
#endif // !_LEARNER_H



