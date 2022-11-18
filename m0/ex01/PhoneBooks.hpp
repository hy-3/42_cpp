#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contactArray[8];
		int num;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add();
		void search();
};

#endif
