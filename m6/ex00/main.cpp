#include "conversion.hpp"

int main() {
	std::string s = "+inff";
	if (s == "+inff")
		printf("jjjjj\n");

	char *end;
	printf("a: %li\n", strtol("-2147483649", &end, 10));
	printf("b: %li\n", strtol("2147483648", &end, 10));
	return 0;
}