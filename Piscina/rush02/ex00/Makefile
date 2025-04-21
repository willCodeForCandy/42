# Nombre del ejecutable
NAME = rush02

# Compilador y opciones
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRC = main.c ft_printstr.c ft_strstr.c interpreter.c is_number.c write_number.c
OBJ = $(SRC:.c=.o)

# Regla principal
all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Regla para compilar archivos .c a .o
%.o: %.c rush02.h
	$(CC) $(FLAGS) -c $< -o $@

# Limpieza de archivos objeto y ejecutables
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re:
	make fclean
	make all
