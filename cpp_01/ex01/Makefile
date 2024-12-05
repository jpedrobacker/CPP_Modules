NAME = zombieHorde

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=g++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) Zombie.cpp zombieHorde.cpp main.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
