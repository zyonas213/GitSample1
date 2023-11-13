#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
		int Number;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkSecret;
	public:
		Contact();
		~Contact();
		int getNumber(void) const;
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkSecret(void) const;

		void setNumber(int num); 
		void setFirstName(std::string const fName);
		void setLastName(std::string const lLame);
		void setNickName(std::string const nName);
		void setPhoneNumber(std::string const pNumber);
		void setDarkSecret(std::string const dSecret);
};