# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 18:55:50 by ahaloui           #+#    #+#              #
#    Updated: 2024/04/15 01:53:06 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_CPP = ScalarConverter.cpp main.cpp

SRC_HPP = ScalarConverter.hpp

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
