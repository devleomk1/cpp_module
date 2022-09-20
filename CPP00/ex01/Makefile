# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 14:23:23 by jisokang          #+#    #+#              #
#    Updated: 2022/09/20 14:59:56 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

CXX		= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	= main.cpp PhoneBook.cpp Contact.cpp
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
