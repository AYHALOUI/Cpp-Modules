# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 21:27:36 by ahaloui           #+#    #+#              #
#    Updated: 2024/04/14 21:27:54 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = convert

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ScalarConverter.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ScalarConverter.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
