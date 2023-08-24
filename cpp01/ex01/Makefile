# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 14:39:56 by ahaloui           #+#    #+#              #
#    Updated: 2023/08/24 14:41:05 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorder

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp zombieHorder.cpp

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