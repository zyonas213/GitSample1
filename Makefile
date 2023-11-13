FILE = phonebook
FILELES = Contact.cpp phonebook.cpp main.cpp
CPP = c++
RM = rm
FLAG = -Wall -Wextra -Werror -std=c++98

all:
	$(CPP) $(FILELES) -o $(FILE)

clean:
	$(RM) -f $(FILE)
