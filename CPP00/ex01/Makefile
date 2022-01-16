# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 18:09:02 by jisokang          #+#    #+#              #
#    Updated: 2022/01/17 01:32:48 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -rf

SRCS	= PhoneBook.cpp
OBJS	= $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CCFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CCFLAG) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :fclean all

