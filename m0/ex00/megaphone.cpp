#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		for (int j = 0; j < (int)strlen(argv[i]); j++)
			putchar(toupper(argv[i][j]));
	cout << "\n";
	return 0;
}