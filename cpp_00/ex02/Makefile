NAME = account

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) Account.cpp tests.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean
	make
