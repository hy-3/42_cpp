#include "Contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

/* Setter */
void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
void Contact::setIndex(int index)
{
	this->index = index;
}

/* Getter */
std::string Contact::getFirstName()
{
	return firstName;
}
std::string Contact::getLastName()
{
	return lastName;
}
std::string Contact::getNickname()
{
	return nickname;
}
std::string Contact::getPhoneNumber()
{
	return phoneNumber;
}
std::string Contact::getDarkestSecret()
{
	return darkestSecret;
}
int Contact::getIndex()
{
	return index;
}

void Contact::printInfoWithSeparator(std::string str, char c)
{
	if (str.length() > 10) {
		std::cout << str.substr(0, 9) << ".";
	} else {
		for (int i = 0; i < 10 - (int)str.length(); i++)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << c;
}
