#include "conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2 || strcmp(argv[1], "") == 0) {
		std::cout << "Argument error." << std::endl;
		return 1;
	}
	if (checkCharPhase(argv[1]))
		convertCharPhase(argv[1][0]);
	else if (checkIntPhase(argv[1]))
		convertIntPhase(argv[1]);
	else if (checkFloatPhase(argv[1]))
		convertFloatPhase(argv[1]);
	else if (checkDoublePhase(argv[1]))
		convertDoublePhase(argv[1]);
	else
		std::cout << "Conversion failed (non of conversion was possible)." << std::endl;
	return 0;
}