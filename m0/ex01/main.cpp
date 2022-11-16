#include "phonebook.hpp"

int isValidPhoneNumber(string str_pn)
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
	string fn;
	string ln;
	string nn;
	string pn;
	string ds;

	cout << "Type your first name: ";
	cin >> fn;
	cout << "Type your last name: ";
	cin >> ln;
	cout << "Type your nickname: ";
	cin >> nn;
	cout << "Type your phone number (int): ";
	cin >> pn;
	if (isValidPhoneNumber(pn) == 0)
	{
		cout << ">> [ADD] action failed: Please type numeric number.\n";
		return;
	}
	cout << "Type your darkest secret: ";
	cin >> ds;
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
		cout << " ";
}

void printEachInfo(string str, char c)
{
	if (str.length() > 10)
	{
		cout << str.substr(0, 9) << ".";
	}
	else
	{
		printSpace(str.length());
		cout << str;
	}
	cout << c;
}

void search(PhoneBook p[])
{
	int k = 0;
	while (k < 8)
	{
		if (p[k].getFirstName() == "")
			break;
		cout << setw(10);
		cout << k << "|";
		printEachInfo(p[k].getFirstName(), '|');
		printEachInfo(p[k].getLastName(), '|');
		printEachInfo(p[k].getNickname(), '\n');
		k++;
	}
}

int main(void)
{
	string input = "";
	PhoneBook p[8];
	int i = 0;

	while (1)
	{
		cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		if (input.compare("ADD") == 0)
			add(i++, p);
		if (input.compare("SEARCH") == 0)
			search(p);
	}
	return 0;
}