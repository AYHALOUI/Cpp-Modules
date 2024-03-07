NAME = test

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Base.cpp A.cpp B.cpp C.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)