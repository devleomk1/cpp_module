# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:42:14 by jisokang          #+#    #+#              #
#    Updated: 2022/09/20 14:59:56 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CXX		= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	= Fixed.cpp\
			main.cpp
OBJS	= $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :fclean all
