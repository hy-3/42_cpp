#include "Karen.hpp"

Karen::Karen(){
	loggerType[0] = "debug";
	loggerType[1] = "info";
	loggerType[2] = "warning";
	loggerType[3] = "error";
	pointer[0] = &Karen::debug;
	pointer[1] = &Karen::info;
	pointer[2] = &Karen::warning;
	pointer[3] = &Karen::error;
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
	for (int i = 0; i < 4; i++) {
		if (loggerType[i].compare(level) == 0)
			(this->*pointer[i])();
	}
}
