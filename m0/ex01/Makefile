NAME = phonebook
CC = g++
FLAG_WARN = -Wall -Wextra -Werror
SRC = phonebook.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG_WARN) -o $(NAME)

%.o: %.c
	$(CC) $(FLAG_WARN) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	make clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re