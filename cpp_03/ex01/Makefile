NAME = scavTrap

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=g++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) main.cpp ClapTrap.cpp ScavTrap.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
