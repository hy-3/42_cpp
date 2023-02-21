NAME = span
CC = clang++
FLAG_WARN = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	  span.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG_WARN) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAG_WARN) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	make clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re