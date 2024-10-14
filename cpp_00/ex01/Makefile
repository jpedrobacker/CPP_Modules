NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) PhoneBook.cpp Contact.cpp main.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
