# Nombre del programa (Suele pedirse en minúsculas, revisa si el subject pide "phonebook")
NAME		= phonebook

# Archivos fuente
SRC			= main.cpp PhoneBook.cpp Contact.cpp

# Objetos (cambia .cpp por .o)
OBJ			= $(SRC:.cpp=.o)

# Compilador (OBLIGATORIO c++, no g++)
CC			= c++

# Banderas (Flags) OBLIGATORIAS
# -pedantic es opcional pero recomendada para asegurar C++98 estricto
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

# Comando para borrar
RM			= rm -f

# --- REGLAS (Recuerda: ¡TABULADORES, no espacios!) ---

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

# Regla implícita para compilar .cpp a .o individualmente
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re