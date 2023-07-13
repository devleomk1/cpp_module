# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 22:03:13 by jisokang          #+#    #+#              #
#    Updated: 2023/07/13 22:04:40 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CXX		= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	=	main.cpp
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
