#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>

using namespace std;

class PhoneBook
{
	private:
		string firstName;
		string lastName;
		string nickname;
		string phoneNumber;
		string darkestSecret;
	public:
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setNickname(string nickname);
		void setPhoneNumber(string phoneNumber);
		void setDarkestSecret(string darkestSecret);
		string getFirstName();
		string getLastName();
		string getNickname();
		string getPhoneNumber();
		string getDarkestSecret();
};

#endif