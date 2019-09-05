# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 19:49:00 by bstacksp          #+#    #+#              #
#    Updated: 2019/09/05 20:01:57 by bstacksp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS =  /includes/libft.h
PART1	= ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
		 ft_strstr.c  ft_strcmp.c  \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c
FILES 	= $(PART1)
SRCS		= $(addprefix srcs/, $(FILES))
OBJ = *.o

all:
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)



clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all