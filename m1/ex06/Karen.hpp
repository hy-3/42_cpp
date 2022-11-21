#pragma once
#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>

class Karen {
	private:
		std::string loggerType[4];
		void debug();
		void info();
		void warning();
		void error();
	public:
		Karen();
		~Karen();
		void complain(std::string level);
};

#endif