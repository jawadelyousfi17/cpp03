NAME		= FragTrap
CC		= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98

SRC_FILES	= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
OBJ_FILES	= $(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.cpp FragTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re