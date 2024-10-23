NAME = scavTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) main.cpp ClapTrap.cpp ScavTrap.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
