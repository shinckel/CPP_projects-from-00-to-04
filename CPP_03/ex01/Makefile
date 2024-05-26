# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 19:17:52 by shinckel          #+#    #+#              #
#    Updated: 2024/05/06 21:40:53 by shinckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRCS =	src/main.cpp \
		src/ClapTrap.cpp \
		src/ScavTrap.cpp

CC = c++

CCFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

# Define colors
RED = \033[1;41m
GREEN = \033[1;42m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(OBJSLIB) $(OBJSPR)
	@c++ -Wall -Werror -Wextra -std=c++98 $(OBJS) -o $(NAME)
	@echo "$(GREEN) Ready to CPP_03-01 $(RESET)"

clean:
	@rm -f *.o
	@echo "$(RED) Remove object files $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) Remove $(NAME) $(RESET)"

re: fclean all

.PHONY: all clean fclean re
