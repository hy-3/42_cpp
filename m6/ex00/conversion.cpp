#include "conversion.hpp"

bool checkCharPhase(std::string str) {
	if (str.length() == 1 && isdigit(str[0] - '0') && isprint(str[0] - '0'))
		return true;
	return false;
}

bool checkIntPhase(std::string str) {
	long int i;
	char* endptr;

	i = strtol(str.c_str(), &endptr, 10);
	if (i > INT_MAX || i < INT_MIN || *endptr)
		return false;
	return true;
}

bool checkFloatPhase(std::string str) {
	double f;
	char* endptr;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	errno = 0;
	f = strtod(str.c_str(), &endptr);
	if (errno || *endptr != 'f')
		return false;
	if ((f > 0 && (f > FLT_MAX || f < FLT_MIN)) || (f < 0 && (-f > FLT_MAX || -f < FLT_MIN)))
		return false;
	return true;
}

bool checkDoublePhase(std::string str) {
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

void convertCharPhase(char c) {
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convertIntPhase(std::string str) {
	int i = atoi(str.c_str());
	if (i < 0 || i > 255)
		std::cout << "char: impossible." << std::endl;
	else if (isprint(i))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: non displayable." << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void convertFloatPhase(std::string str) {
	if (str == "-inff" || str == "+inff" || str == "nanf") {
		std::cout << "char: impossible." << std::endl;
		std::cout << "int: impossible." << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	} else {
		float f = strtod(str.c_str(), NULL);
		if (f > 255.0f || f < 0.0f)
			std::cout << "char: impossible." << std::endl;
		else if (isprint(static_cast<int>(f) == 0))
			std::cout << "char: non displayable." << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
			std::cout << "int: impossible." << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

void convertDoublePhase(std::string str) {
	if (str == "-inf" || str == "+inf" || str == "nan") {
		std::cout << "char: impossible." << std::endl;
		std::cout << "int: impossible." << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	} else {
		double d = strtod(str.c_str(), NULL);
		if (d > 255.0f || d < 0.0f)
			std::cout << "char: impossible." << std::endl;
		else if (isprint(static_cast<int>(d) == 0))
			std::cout << "char: non displayable." << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
			std::cout << "int: impossible." << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		if ((static_cast<float>(d) > 0 && (static_cast<float>(d) > FLT_MAX || static_cast<float>(d) < FLT_MIN)) \
			|| (static_cast<float>(d) < 0 && (-static_cast<float>(d) > FLT_MAX || -static_cast<float>(d) < FLT_MIN)))
			std::cout << "float: impossible." << std::endl;
		else
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}