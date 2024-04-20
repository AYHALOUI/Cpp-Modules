# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 22:37:20 by ahaloui           #+#    #+#              #
#    Updated: 2024/04/18 15:35:46 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_CPP = main.cpp

SRC_HPP = MutantStack.hpp MutantStack.tpp

OBJ = $(SRC_CPP:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(SRC_HPP)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)