# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 01:30:37 by ahaloui           #+#    #+#              #
#    Updated: 2024/04/15 02:00:10 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_CPP = Serializer.cpp main.cpp

SRC_HPP = Serializer.hpp

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
