#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){	index = 0; }
PhoneBook::~PhoneBook(void){}


int isValidPhoneNumber(std::string str_pn)
{
	for (int i = 0; i < (int)str_pn.length(); i++)
	{
		if (!(isdigit(str_pn[i])))
			return 0;
	}
	return 1;
}

void PhoneBook::add()
{
	std::string fn;
	std::string ln;
	std::string nn;
	std::string pn;
	std::string ds;

	std::cout << "Type your first name: ";
	std::cin >> fn;
	std::cout << "Type your last name: ";
	std::cin >> ln;
	std::cout << "Type your nickname: ";
	std::cin >> nn;
	std::cout << "Type your phone number (int): ";
	std::cin >> pn;
	if (isValidPhoneNumber(pn) == 0)
	{
		std::cout << ">> [ADD] action failed: Please type numeric number.\n";
		return;
	}
	std::cout << "Type your darkest secret: ";
	std::cin >> ds;
	this->contactArray[this->index % 8].setFirstName(fn);
	this->contactArray[this->index % 8].setLastName(ln);
	this->contactArray[this->index % 8].setNickname(nn);
	this->contactArray[this->index % 8].setPhoneNumber(pn);
	this->contactArray[this->index % 8].setDarkestSecret(ds);
	this->index++;
}


void printSpace(int len)
{
	int i = 0;
	while (i++ < 10 - len)
		std::cout << " ";
}

void printEachInfo(std::string str, char c)
{
	if (str.length() > 10) {
		std::cout << str.substr(0, 9) << ".";
	} else {
		printSpace(str.length());
		std::cout << str;
	}
	std::cout << c;
}

void printHeader(void)
{
	std::cout << std::setw(11);
	std::cout << "INDEX|";
	std::cout << std::setw(11);
	std::cout << "FIRSTNAME|";
	std::cout << std::setw(11);
	std::cout << "LASTNAME|";
	std::cout << std::setw(10);
	std::cout << "NICKNAME" << std::endl;
}

void PhoneBook::search()
{
	printHeader();
	int k = 0;
	while (k < 8)
	{
		if (this->contactArray[k].getFirstName() == "")
			break;
		std::cout << std::setw(10);
		std::cout << this->index << "|";
		printEachInfo(this->contactArray[k].getFirstName(), '|');
		printEachInfo(this->contactArray[k].getLastName(), '|');
		printEachInfo(this->contactArray[k].getNickname(), '\n');
		k++;
	}
}
