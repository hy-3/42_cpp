#include "phonebook.hpp"

void PhoneBook::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}
void PhoneBook::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
void PhoneBook::setNickname(std::string nickname)
{
	this->nickname = nickname;
}
void PhoneBook::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void PhoneBook::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string PhoneBook::getFirstName()
{
	return firstName;
}
std::string PhoneBook::getLastName()
{
	return lastName;
}
std::string PhoneBook::getNickname()
{
	return nickname;
}
std::string PhoneBook::getPhoneNumber()
{
	return phoneNumber;
}
std::string PhoneBook::getDarkestSecret()
{
	return darkestSecret;
}