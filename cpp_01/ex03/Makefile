NAME = unViolence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) main.cpp Weapon.cpp HumanA.cpp HumanB.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
