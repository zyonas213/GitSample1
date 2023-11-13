#include "Contact.hpp"

Contact::Contact()
{
	// std::cout << "Default Constructor." << std::endl;
	return ;
}

Contact::~Contact()
{
	// std::cout << "Default Destructor." << std::endl;
	return ;
}

int Contact::getNumber(void) const
{
	return this->Number;
}

std::string Contact::getFirstName(void) const{
	return this->FirstName;
}

std::string Contact::getLastName(void) const
{
	return this->LastName;
}

std::string Contact::getNickName(void) const
{
	return this->NickName;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->PhoneNumber;
}

std::string Contact::getDarkSecret(void) const
{
	return this->DarkSecret;
}

void Contact::setNumber(int num)
{
	this->Number = num;
}

void Contact::setFirstName(std::string const fName)
{
	this->FirstName = fName;
}

void Contact::setLastName(std::string const lLame)
{
	this->LastName = lLame;
}

void Contact::setNickName(std::string const nName)
{
	this->NickName = nName;
}

void Contact::setPhoneNumber(std::string const pNumber)
{
	this->PhoneNumber = pNumber;
}

void Contact::setDarkSecret(std::string const dSecret)
{
	this->DarkSecret = dSecret;
}
