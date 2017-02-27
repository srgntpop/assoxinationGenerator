#ifndef ASSOXINATOR_H
#define ASSOXINATOR_H

#include <string>
#include <iostream>

class Assoxinator {
	# each assoxinator has a life card and target card with a name on it
	private:
		string life;
		string target;
	
	public:
		Assoxinator();
		Assoxinator(string, string);
		void status();
		string getLife();
		string getTarget();
}

#endif
