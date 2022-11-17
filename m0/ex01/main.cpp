#include "phonebook.hpp"

int isValidPhoneNumber(std::string str_pn)
{
	for (int i = 0; i < (int)str_pn.length(); i++)
	{
		if (!(isdigit(str_pn[i])))
			return 0;
	}
	return 1;
}

void add(int i, PhoneBook p[])
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
	p[i % 8].setFirstName(fn);
	p[i % 8].setLastName(ln);
	p[i % 8].setNickname(nn);
	p[i % 8].setPhoneNumber(pn);
	p[i % 8].setDarkestSecret(ds);
}

void printSpace(int len)
{
	int i = 0;
	while (i++ < 10 - len)
		std::cout << " ";
}

void printEachInfo(std::string str, char c)
{
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9) << ".";
	}
	else
	{
		printSpace(str.length());
		std::cout << str;
	}
	std::cout << c;
}

void search(PhoneBook p[])
{
	int k = 0;
	while (k < 8)
	{
		if (p[k].getFirstName() == "")
			break;
		std::cout << std::setw(10);
		std::cout << k << "|";
		printEachInfo(p[k].getFirstName(), '|');
		printEachInfo(p[k].getLastName(), '|');
		printEachInfo(p[k].getNickname(), '\n');
		k++;
	}
}

int main(void)
{
	std::string input = "";
	PhoneBook p[8];
	int i = 0;

	while (1)
	{
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		if (input.compare("ADD") == 0)
			add(i++, p);
		if (input.compare("SEARCH") == 0)
			search(p);
	}
	return 0;
}