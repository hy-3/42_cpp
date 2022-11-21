#include "Karen.hpp"

Karen::Karen(){
	loggerType[0] = "DEBUG";
	loggerType[1] = "INFO";
	loggerType[2] = "WARNING";
	loggerType[3] = "ERROR";
}

Karen::~Karen(){}

void Karen::debug() {
	std::cout << "[DEBUG] I love to get extra bacon." << std::endl;
}

void Karen::info() {
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money." << std::endl;
}

void Karen::warning() {
	std::cout << "[WARN] I think I deserve to have some extra bacon for free." << std::endl;
}

void Karen::error() {
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	int pos = -1;
	for (int i = 0; i < 4; i++) {
		if (loggerType[i].compare(level) == 0)
			pos = i;
	}
	switch(pos)
	{
		case 0: this->debug();
		case 1: this->info();
		case 2: this->warning();
		case 3: this->error();
				break;
		default: std::cout << "Probably complaining about insignificant problems." << std::endl;
	}
}
