#include <iostream>
#include <string>
#include "Contact.hpp"


std::string trimName(std::string str);
class PhoneBook
{
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void displayPhoneBook(void) const;
		void searchContact(void) const;
		void addContact(int i);
};