# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 00:33:51 by jisokang          #+#    #+#              #
#    Updated: 2022/05/13 02:31:57 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	=	main.cpp\
			Harl.cpp
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
