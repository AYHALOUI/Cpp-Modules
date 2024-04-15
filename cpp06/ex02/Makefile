# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 01:20:03 by ahaloui           #+#    #+#              #
#    Updated: 2024/04/15 02:01:03 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_CPP = Base.cpp main.cpp

SRC_HPP = Base.hpp A.hpp B.hpp C.hpp

OBJ = $(SRC:.SRC_CPP=.o)

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