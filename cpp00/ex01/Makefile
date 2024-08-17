FLAGS = -g3 -std=c++98 -Wall -Wextra -Werror 
SRC = main.cpp Contact.cpp PhoneBook.cpp
NAME = prog
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)