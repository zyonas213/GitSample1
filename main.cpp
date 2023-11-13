#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

std::string toLowerStr(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
	return str;
}

int main()
{
	PhoneBook pbook;
	std::string info;

	int i = 0;
	while (i < 8)
	{
		std::cout << "Insert  'ADD' 'SEARCH' 'DISPLAY' or 'EXIT': ";
		std::cin >> info;
		if (info != "")
		{
			if (toLowerStr(info) == "add" )
				pbook.addContact(i);
			else if (toLowerStr(info) == "search")
				pbook.searchContact();
			else if (toLowerStr(info) == "display")
				pbook.displayPhoneBook();
			else if (toLowerStr(info) == "exit")
				break;
		}
		if ((toLowerStr(info) == "add"))
			i++;
		if (i == 8)
			i = 0;
	}
	return (0);
}