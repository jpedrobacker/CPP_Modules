NAME = zombieHorde

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) Zombie.cpp newZombie.cpp randomChump.cpp main.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
