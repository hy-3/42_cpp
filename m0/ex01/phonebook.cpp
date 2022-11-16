#include <iostream>
#include <iomanip>

using namespace std;

class PhoneBook
{
	private:
		string firstName;
		string lastName;
		string nickname;
		int phoneNumber;
		string darkestSecret;

	public:
		void setFirstName(string firstName)
		{
			this->firstName = firstName;
		}
		void setLastName(string lastName)
		{
			this->lastName = lastName;
		}
		void setNickname(string nickname)
		{
			this->nickname = nickname;
		}
		void setPhoneNumber(int phoneNumber)
		{
			this->phoneNumber = phoneNumber;
		}
		void setDarkestSecret(string darkestSecret)
		{
			this->darkestSecret = darkestSecret;
		}

		string getFirstName()
		{
			return firstName;
		}
		string getLastName()
		{
			return lastName;
		}
		string getNickname()
		{
			return nickname;
		}
		int getPhoneNumber()
		{
			return phoneNumber;
		}
		string getDarkestSecret()
		{
			return darkestSecret;
		}

};

void add(int i, PhoneBook p[])
{
	string i1;
	string i2;
	string i3;
	int i4;
	string i5;

	cout << "Type your first name: ";
	cin >> i1;
	cout << "Type your last name: ";
	cin >> i2;
	cout << "Type your nickname: ";
	cin >> i3;
	cout << "Type your phone number: "; //TODO: retry when it is not a number
	cin >> i4;
	cout << "Type your darkest secret: ";
	cin >> i5;
	p[i % 8].setFirstName(i1);
	p[i % 8].setLastName(i2);
	p[i % 8].setNickname(i3);
	p[i % 8].setPhoneNumber(i4);
	p[i % 8].setDarkestSecret(i5);
}

void search(int i, PhoneBook p[])
{
	int k = 0;
	string firstName;
	string lastName;
	string nickname;
	while (k < 8)
	{
		if (p[k].getFirstName() == "")
			break;

		cout << setw(10);
		cout << k << "|";

		firstName = p[k].getFirstName();
		if (firstName.length() > 10)
			cout << firstName.substr(0, 9) << ".";
		else {
			int j = 0;
			while (j < 10 - firstName.length())
			{
				cout << " ";
				j++;
			}
 			cout << firstName;
		}
		cout << "|";

		lastName = p[k].getLastName();
		if (lastName.length() > 10)
			cout << lastName.substr(0, 9) << ".";
		else {
			int j = 0;
			while (j < 10 - lastName.length())
			{
				cout << " ";
				j++;
			}
			cout << lastName;
		}
		cout << "|";

		nickname = p[k].getNickname();
		if (nickname.length() > 10)
			cout << nickname.substr(0, 9) << "." << "\n";
		else {
			int j = 0;
			while (j < 10 - nickname.length())
			{
				cout << " ";
				j++;
			}
			cout << nickname << "\n";
		}
		k++;
	}
}

int main(int argc, char** argv)
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
			search(i, p);
		
	}
	return 0;
}