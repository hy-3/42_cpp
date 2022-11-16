NAME = phonebook
CC = g++
FLAG_WARN = -Wall -Wextra -Werror
SRC = main.cpp \
	  phonebook.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(FLAG_WARN) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re