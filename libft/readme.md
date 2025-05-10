# Libft

## Objetivos
Hacer mi propia librería en C

## Archivos a entregar
- Makefile
	- NAME, all, clean, fclean, re
	- usar comando **ar** para generar la librería
- libft.h
- ft_*.c (*ver abajo)

## Reglas
- Si necesitas separar una función compleja en varias, asegúrate de utilizar la palabra *static* para ello.
- Todos los archivos .c deben compilarse con las flags -Wall -Werror -Wextra

## Funciones
Deberás rehacer algunas funciones de la libc. Tus funciones tendrán los mismos prototipos e implementarán los mismos comportamientos que las funciones originales. Deberán ser **tal y como las describe el man**. La única diferencia será la nomenclatura. Empezarán con el prefijo “ft_”. Por ejemplo, strlen se convertirá en ft_strlen.
## Parte 1
- isalpha ✅✅
- isdigit ✅✅
- isalnum ✅✅
- isascii ✅✅
- isprint ✅✅
- strlen ✅✅
- memset ✅✅
- bzero ✅✅
- memcpy ✅✅
- memmove ✅✅
- strlcpy ✅✅
- strlcat ✅✅
- toupper ✅✅
- tolower ✅✅
- strchr ✅✅
- strrchr ✅✅
- strncmp ✅✅
- memchr ✅✅
- memcmp ✅✅
- strnstr ✅✅
- atoi ✅✅
**Con Malloc**
	- calloc ✅✅
	- strdup ✅✅

## Parte 2
- ft_substr ✅✅
- ft_strjoin ✅✅
- ft_strtrim ✅✅
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## BONUS
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap
