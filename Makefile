FILE = phonebook
FILELES = Contact.cpp phonebook.cpp main.cpp
CPP = c++
RM = rm -rf
FLAG = -Wall -Wextra -Werror -std=c++98
OBJ = Contact.obj phonebook.obj main.obj

all:
	$(CPP) $(FILELES) -o $(FILE)

obj:
	$(CPP) -c $(FILES)
clean:
	$(RM) $(FILE)
#Make file run commands
@PHONY clean all obj
