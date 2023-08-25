# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 16:22:18 by ahaloui           #+#    #+#              #
#    Updated: 2023/08/25 13:40:24 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp 

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)