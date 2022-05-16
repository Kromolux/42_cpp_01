# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 13:38:45 by rkaufman          #+#    #+#              #
#    Updated: 2022/05/13 16:45:46 by rkaufman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	Sed_is_for_losers

CC			:=	c++

SRCS		:=	main.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
	
clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)
	rm -fr *.replace

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

leak:
	leaks --atExit -- ./$(NAME)

test:
	@echo Test without arguments
	./$(NAME)
	@echo Test with to much arguments
	./$(NAME) Template.cpp Template Account 123456
	@echo Test with wrong argument
	./$(NAME) Template.c Template Account
	@echo Test with correct arguments
	./$(NAME) Template.cpp Template Account
	./$(NAME) Template.hpp Template Account

.PHONY: clean fclean re
