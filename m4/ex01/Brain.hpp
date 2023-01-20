#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string _ideas[100];
		int _currNumOfIdeas;
	public:
		Brain();
		~Brain();

		/* methods */
		void printAllIdeas() const;
		void addIdea(std::string str);
		
		/* getter, setter */
		int getCurrNumOfIdeas() const;
		void setCurrNumOfIdeas(int i);
};

#endif