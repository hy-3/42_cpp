#include "phonebook.hpp"

void PhoneBook::setFirstName(string firstName)
{
	this->firstName = firstName;
}
void PhoneBook::setLastName(string lastName)
{
	this->lastName = lastName;
}
void PhoneBook::setNickname(string nickname)
{
	this->nickname = nickname;
}
void PhoneBook::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void PhoneBook::setDarkestSecret(string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

string PhoneBook::getFirstName()
{
	return firstName;
}
string PhoneBook::getLastName()
{
	return lastName;
}
string PhoneBook::getNickname()
{
	return nickname;
}
string PhoneBook::getPhoneNumber()
{
	return phoneNumber;
}
string PhoneBook::getDarkestSecret()
{
	return darkestSecret;
}