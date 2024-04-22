# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 19:17:52 by shinckel          #+#    #+#              #
#    Updated: 2024/04/22 16:24:30 by shinckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Use = (recursive assignment) when you want the value of the variable to be 
# evaluated at the time of use. This is useful when the variable's value depends
# on the values of other variables that may not be set at the time of the assignment.

# Use := (simple assignment) when you want the value of the variable to be 
# evaluated at the time of assignment. This is useful when you want to ensure that
# the value is fixed at the time of assignment and does not depend on any variables 
# that may change later.

NAME = fixed

SRCS =	src/main.cpp \
				src/Fixed.cpp

CC = c++

CCFLAGS = -Wall -Werror -Wextra -std=c++98 -Iheader

OBJS = $(SRCS:.cpp=.o)

# Define colors
RED = \033[1;41m
GREEN = \033[1;42m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(OBJSLIB) $(OBJSPR)
	@c++ -Wall -Werror -Wextra -std=c++98 $(OBJS) -o $(NAME)
	@echo "$(GREEN) Ready to CPP_02-00 $(RESET)"

clean:
	@rm -f *.o
	@echo "$(RED) Remove object files $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) Remove $(NAME) $(RESET)"

re: fclean all

.PHONY: all clean fclean re
