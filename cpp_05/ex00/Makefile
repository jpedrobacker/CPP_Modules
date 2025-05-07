NAME = bureaucrat

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) main.cpp Bureaucrat.cpp -o $(NAME)

clean:
	rm -rf $(NAME)
	
re:	clean
	make
