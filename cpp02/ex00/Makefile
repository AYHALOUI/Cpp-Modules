# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 10:44:52 by ahaloui           #+#    #+#              #
#    Updated: 2023/09/14 10:52:06 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedpoint

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
