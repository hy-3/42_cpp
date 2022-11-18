#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		int index;
	public:
		Contact(void);
		~Contact(void);
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);
		void setIndex(int index);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		int getIndex();
		static void printInfoWithSeparator(std::string str, char c);
};

#endif
