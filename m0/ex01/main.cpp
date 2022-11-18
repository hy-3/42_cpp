#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook pb;
	std::string input = "";

	while (1)
	{
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		if (input.compare("ADD") == 0)
			pb.add();
		if (input.compare("SEARCH") == 0)
			pb.search();
	}
	return 0;
}
