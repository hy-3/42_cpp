#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){	num = 0; }
PhoneBook::~PhoneBook(void){}

void PhoneBook::add()
{
	std::string fn, ln, nn, pn, ds;

	std::cout << "Type your first name: ";
	std::cin >> fn;
	std::cout << "Type your last name: ";
	std::cin >> ln;
	std::cout << "Type your nickname: ";
	std::cin >> nn;
	std::cout << "Type your phone number (int): ";
	std::cin >> pn;
	for (int i = 0; i < (int)pn.length(); i++) {
		if (!(isdigit(pn[i]))) {
			std::cout << ">> [ADD] action failed: Please type numeric number." << std::endl;
			return ;
		}
	}
	std::cout << "Type your darkest secret: ";
	std::cin >> ds;
	this->contactArray[this->num % 8].setFirstName(fn);
	this->contactArray[this->num % 8].setLastName(ln);
	this->contactArray[this->num % 8].setNickname(nn);
	this->contactArray[this->num % 8].setPhoneNumber(pn);
	this->contactArray[this->num % 8].setDarkestSecret(ds);
	this->contactArray[this->num % 8].setIndex(num);
	this->num++;
}

void PhoneBook::search()
{
	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	int k = 0;
	while (k < 8)
	{
		if (k == this->num)
			break;
		std::cout << std::setw(10);
		std::cout << this->contactArray[k].getIndex() << "|";
		Contact::printInfoWithSeparator(this->contactArray[k].getFirstName(), '|');
		Contact::printInfoWithSeparator(this->contactArray[k].getLastName(), '|');
		Contact::printInfoWithSeparator(this->contactArray[k].getNickname(), '\n');
		k++;
	}
}
