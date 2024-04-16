# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 18:21:08 by jwolfram          #+#    #+#              #
#    Updated: 2024/04/16 12:51:59 by jwolfram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := cc

CFLAGS := -Wall -Werror -Wextra -c

SRC := ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strmapi.c \
	  ft_striteri.c \

BONUS_SRC := ft_lstnew_bonus.c \
			 ft_lstadd_front_bonus.c \
			 ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c \

OBJ := ${SRC:.c=.o}

BONUS_OBJ := ${BONUS_SRC:.c=.o}

LIBC := ar -rcs

RM := rm -rf

all: ${NAME}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}

%.o: %.c
	${CC} ${CFLAGS} $< -I. -o $@

bonus: ${BONUS_OBJ} ${OBJ}
	${LIBC} ${NAME} ${BONUS_OBJ} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean 
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
