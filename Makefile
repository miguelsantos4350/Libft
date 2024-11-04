# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msantos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 17:48:00 by msantos           #+#    #+#              #
#    Updated: 2024/10/23 17:48:53 by msantos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
      ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	  ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strdup.c ft_strjoin.c \
	  ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_strtrim.c ft_substr.c \
	  ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_memchr.c \
	  ft_memcmp.c ft_itoa.c ft_putendl_fd.c ft_split.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
