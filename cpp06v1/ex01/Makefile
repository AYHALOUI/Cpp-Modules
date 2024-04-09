NAME = serialization

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++11

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
