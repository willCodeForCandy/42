# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: virginia <virginia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 12:13:14 by virrasch          #+#    #+#              #
#    Updated: 2025/05/04 16:52:21 by virginia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME - COMPILER - FLAGS #

NAME = libft.a
CC = cc
CFLAGS= -Wall -Wextra -Werror

# SOURCES - OBJECTS #

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJ = $(SRC:.c=.o)

# MAIN RULE #

all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
# Limpieza de archivos objeto y ejecutables
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re:
	make fclean
	make all
