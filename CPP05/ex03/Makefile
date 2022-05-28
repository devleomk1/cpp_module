# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 14:29:20 by jisokang          #+#    #+#              #
#    Updated: 2022/05/28 23:08:40 by jisokang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= a.out

CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRCS	=	Bureaucrat.cpp\
			Form.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\
			Intern.cpp\
			main.cpp
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
