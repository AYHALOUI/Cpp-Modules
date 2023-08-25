# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 14:52:31 by ahaloui           #+#    #+#              #
#    Updated: 2023/08/25 15:14:42 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Template.cpp

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