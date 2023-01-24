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

		void printAllIdeas() const;
		void addIdea(std::string str);
		std::string getIdea(int i);
		
		int getCurrNumOfIdeas() const;
		void setCurrNumOfIdeas(int i);

};

#endif