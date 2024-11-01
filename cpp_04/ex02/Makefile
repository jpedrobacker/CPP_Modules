NAME = animals

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make

