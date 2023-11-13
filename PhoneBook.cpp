#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook(){
	return ;
}

std::string trimName(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0,9);
		str.replace(9, 1, ".");;
	}
	return str;
}

void PhoneBook::displayPhoneBook(void) const
{
	int i = 0;

	std::cout << "List of Contacts." << std::endl;

	while (i < 8 && !this->contact[i].getFirstName().empty())
	{
		std::cout << std::setw(10) << this->contact[i].getNumber() << "|" <<
		std::setw(10) << trimName(this->contact[i].getLastName()) << "|" <<
		std::setw(10) << trimName(this->contact[i].getLastName()) << "|" <<
		std::setw(10) << trimName(this->contact[i].getNickName()) << "|" <<
		std::setw(10) << trimName(this->contact[i].getPhoneNumber()) << "|" <<
		std::setw(10) << trimName(this->contact[i].getDarkSecret()) << "|" << std::endl;
		i++;
	}
}

void PhoneBook::searchContact(void) const
{
	int i;
	std::cout << "Insert Search Index. ";
	std::cin >> i;
	i = i - 1;
	if (i < 1 || i > 8
	
	
	clcl
	
	
	
	)
		std::cout << "Invalid Index. " << std::endl;
	else if ((i > 0 && i < 9) && this->contact[i].getFirstName().empty())
		std::cout << "No Contact Found" << std::endl;
	else
	{
		std::cout << "Contacts." << std::endl;
		std::cout << std::setw(10) << this->contact[i].getNumber() << "|" <<
		std::setw(10) << this->contact[i].getFirstName() << "|" <<
		std::setw(10) << this->contact[i].getLastName() << "|" <<
		std::setw(10) << this->contact[i].getNickName() << "|" <<
		std::setw(10) << this->contact[i].getPhoneNumber() << "|" <<
		std::setw(10) << this->contact[i].getDarkSecret() << "|" << std::endl;
	}
}

void PhoneBook::addContact(int i)
{
	std::string fname;
	std::string lname;
	std::string nname;
	std::string pnumber;
	std::string dsecret;

	std::cout << "Insert Contact Detail. " << std::endl;
	std::cout << "First Name: ";
	std::cin >> fname;
	std::cout << "Last Name: ";
	std::cin >> lname;
	std::cout << "Nick Name: ";
	std::cin >> nname;
	std::cout << "Phone Number: ";
	std::cin >> pnumber;
	std::cout << "Dark Secret: ";
	std::cin >> dsecret;

	this->contact[i].setNumber(i + 1);
	this->contact[i].setFirstName(fname);
	this->contact[i].setLastName(lname);
	this->contact[i].setNickName(nname);
	this->contact[i].setPhoneNumber(pnumber);
	this->contact[i].setDarkSecret(dsecret);
	std::cout << "Contact Inserted. " << i + 1 << std::endl;
}