#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void Karen::debug() {
	std::cout << "DEBUG: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger" << std::endl;
}

void Karen::info() {
	std::cout << "INFO: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "WARN: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "ERROR: This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	struct hash {
		static int calc(int c) {
			if (c - 99 > 10)
				return 3;
			else
				return (c - 99) % 3;
		}
	};
	loggerType[0] = &Karen::info;
	loggerType[1] = &Karen::debug;
	loggerType[2] = &Karen::error;
	loggerType[3] = &Karen::warning;
	(this->*loggerType[hash::calc(level[0])])();
}
