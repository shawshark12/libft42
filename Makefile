# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npungkor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 21:26:47 by npungkor          #+#    #+#              #
#    Updated: 2024/03/25 19:06:22 by npungkor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_strdup.c

SRCS_BONUS =

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean :
	rm -rf $(OBJS) $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
