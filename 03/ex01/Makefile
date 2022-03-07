NAME = claptrap

#COMPILE

CC = clang++
CFLAGS = -std=c++98 -MMD -MP -Wall -Wshadow -Wno-shadow -Wextra -Werror

#DIRECTORY

DIR_BUILD = build/

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(addprefix $(DIR_BUILD), $(SRCS:.cpp=.o))

all : $(DIR_BUILD) $(NAME)

$(DIR_BUILD):
	mkdir -p $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJS): $(DIR_BUILD)%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

-include $(OBJS:.o=.d)

clean:
	rm -rf $(DIR_BUILD)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
