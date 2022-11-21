#include <iostream>
#include <fstream>

void createOutputFileAndReplace(char *buffer, char* filename, char *s1, char *s2) {
	std::string str_filename = (std::string)filename + ".replace";
	std::ofstream output(str_filename);

	if (s1[0] == '\0') {
		output << buffer;
	} else {
		for (int i = 0; buffer[i] != '\0'; i++) {
			int k = i;
			int j = 0;
			while (buffer[k] == s1[j] && (buffer[k] != '\0' || s1[j] != '\0')) {
				k++;
				j++;
			}
			if (s1[j] == '\0') {
				output << s2;
				i = k - 1;
			} else {
				output << buffer[i];
			}
		}
	}
	output.close();
}

int getLengthOfFile(std::fstream &fs) {
	int length;

	fs.seekg(0, fs.end);
	length = fs.tellg();
	fs.seekg(0, fs.beg);
	return length;
}

int main(int argc, char **argv) {
	std::fstream fs;
	char *buffer;
	int length;

	fs.exceptions(std::fstream::failbit);
	if (argc != 4) {
		std::cout << "Error: The number of argument isn't correct. (Type 3 args: 'filename' 'string1' 'string2')" << std::endl;
		return 1;
	}
	try {
		fs.open(argv[1]);
	} catch(std::ios_base::failure &e) {
		std::cerr << "File open failed: " << e.what() << std::endl;
		return 1;
	}
	length = getLengthOfFile(fs);
	buffer = new char[length];
	try {
		fs.read(buffer, length);
	} catch(std::ios_base::failure &e) {
		std::cerr << "File read failed: " << e.what() << std::endl;
		return 1;
	}
	createOutputFileAndReplace(buffer, argv[1], argv[2], argv[3]);
	fs.close();
	return 0;
}
