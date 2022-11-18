#include <iostream>

int main(void) {
	std::string s;
	std::string *s_ptr;
	std::string &s_ref = s;

	s = "HI THIS IS BRAIN";
	s_ptr = &s;
	std::cout << "string address            : " << &s << std::endl;
	std::cout << "string address (pointer)  : " << s_ptr << std::endl;
	std::cout << "string address (reference): " << &s_ref << std::endl;
	std::cout << "string (pointer)          : " << *s_ptr << std::endl;
	std::cout << "string (reference)        : " << s_ref << std::endl;
	return 0;
}