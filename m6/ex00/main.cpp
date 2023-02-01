#include "conversion.hpp"

void convert(std::string str)
{
	if (str.empty()) {
		std::cout << "Argument error: empty string." << std::endl;
		return;
	}
	if (checkChar(str))
		convertToChar(str[0]);
	else if (checkInt(str))
		convertToInt(str);
	else if (checkFloat(str))
		convertToFloat(str);
	else if (checkDouble(str))
		convertToDouble(str);
	else
		std::cout << "Conversion failed (non of conversion was possible)." << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Argument error: specify one argument." << std::endl;
		return 1;
	}
	convert(argv[1]);
	return 0;
}