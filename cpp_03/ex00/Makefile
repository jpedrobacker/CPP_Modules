NAME = clapTrap

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=g++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) main.cpp ClapTrap.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
