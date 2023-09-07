# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 19:44:10 by ahaloui           #+#    #+#              #
#    Updated: 2023/09/07 18:42:18 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp newZombie.cpp zombieHorde.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
