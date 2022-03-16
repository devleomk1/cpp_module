# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 14:23:23 by jisokang          #+#    #+#              #
#    Updated: 2022/03/16 14:23:50 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	= main.cpp PhoneBook.cpp Contact.cpp
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
