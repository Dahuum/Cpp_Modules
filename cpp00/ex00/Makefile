FLAGS = -g -std=c++98 -Wall -Wextra -Werror 

SRC = megaphone.cpp

NAME = megaphone

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)