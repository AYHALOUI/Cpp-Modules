# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 20:14:40 by ahaloui           #+#    #+#              #
#    Updated: 2024/04/27 19:50:22 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = RPN

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp RPN.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
