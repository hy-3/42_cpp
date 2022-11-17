NAME = account
CC = c++
FLAG_WARN = -Wall -Wextra -Werror -std=c++98
SRC = Account.cpp \
	  tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(FLAG_WARN) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re