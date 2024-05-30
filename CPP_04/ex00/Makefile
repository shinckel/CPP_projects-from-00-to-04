# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 11:50:29 by shinckel          #+#    #+#              #
#    Updated: 2024/05/30 17:36:12 by shinckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

SRCS =	src/main.cpp \
				src/Animal.cpp \
				src/Dog.cpp \
				src/Cat.cpp \
				src/WrongAnimal.cpp \
				src/WrongCat.cpp

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

# Define colors
RED = \033[1;41m
GREEN = \033[1;42m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(OBJSLIB) $(OBJSPR)
	c++ -Wall -Werror -Wextra -std=c++98 $(OBJS) -o $(NAME)
	@echo "$(GREEN) Ready to CPP_04-00 $(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED) Remove object files $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) Remove $(NAME) $(RESET)"

re: fclean all

.PHONY: all clean fclean re
