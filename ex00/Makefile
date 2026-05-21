NAME        = megaphone
SRC         = megaphone.cpp
OBJ         = $(SRC:.cpp=.o)
CXX         = c++
RM          = rm -f
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re