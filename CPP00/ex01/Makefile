# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 18:09:02 by jisokang          #+#    #+#              #
#    Updated: 2022/01/20 00:41:13 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	= main.cpp PhoneBook.cpp
OBJS	= $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :fclean all

