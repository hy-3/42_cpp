#include "conversion.hpp"

bool checkChar(std::string str) {
	if (str.length() == 1 && isprint(str[0]) != 0)
		return true;
	return false;
}

bool checkInt(std::string str) {
	long int i;
	char* endptr;

	i = strtol(str.c_str(), &endptr, 10);
	if (i > INT_MAX || i < INT_MIN || *endptr)
		return false;
	return true;
}

bool checkFloat(std::string str) {
	double f;
	char* endptr;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	errno = 0;
	f = strtod(str.c_str(), &endptr);
	if (errno || *endptr != 'f')
		return false;
	if (f > FLT_MAX || f < FLT_MIN) //TODO: check if it is ok
		return false;
	return true;
}

bool checkDouble(std::string str) {
	double d;
	char* endptr;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	errno = 0;
	d = strtod(str.c_str(), &endptr);
	if (errno || *endptr)
		return false;
	return true;
}

void convertToChar(char c) {

}

void convertToInt(std::string str) {
	
}

void convertToFloat(std::string str) {

}

void convertToDouble(std::string str) {

}
