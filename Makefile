# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npungkor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 21:26:47 by npungkor          #+#    #+#              #
#    Updated: 2024/02/22 21:49:51 by npungkor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_atoi.c 

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS):.c=.o)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(OBJS) $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make

bonus : $(OBJS)
	ar rcs $(NAME) $^

.PHONY : all clean fclean re bonus
