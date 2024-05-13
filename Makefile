# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 18:21:08 by jwolfram          #+#    #+#              #
#    Updated: 2024/05/13 16:21:12 by jwolfram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

### COMPILATION ###

CC := cc

CFLAGS := -Wall -Werror -Wextra -c

AR := ar -rcs

RM := rm -fr

### LIBFT SOURCES ###

SRCS := ft_isalpha.c \
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
	  ft_striteri.c

OBJS := ${SRC:.c=.o}

### BONUS SOURCES ###

BONUS_SRCS := ft_lstnew_bonus.c \
			 ft_lstadd_front_bonus.c \
			 ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c \
			 ft_lstmap_bonus.c

BONUS_OBJS := ${BONUS_SRC:.c=.o}

### FT_PRINTF SOURCES ###

FT_PRINTF_DIR := ft_printf/

FT_PRINTF_FILES := ft_printf.c \
				   ft_print_char.c \
				   ft_print_str.c \
				   ft_print_nbr.c \
				   ft_print_ptr.c \
				   ft_print_unsigned.c \
				   ft_print_hex.c

FT_PRINTF_SRCS := ${addprefix ${FT_PRINTF_DIR}, ${FT_PRINTF_FILES}}

FT_PRINTF_OBJS := ${FT_PRINTF_SRCS:.c=.o}

### LIBRARY COMMANDS ###

${NAME}: ${OBJS} ${BONUS_OBJS} ${FT_PRINTF_OBJS}
	${AR} ${NAME} ${OBJS} ${BONUS_OBJS} ${FT_PRINTF_OBJS}

all: ${NAME}

libft: ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus: ${BONUS_OBJS}
	${AR} ${NAME} ${BONUS_OBJS}

ft_printf : ${FT_PRINTF_OBJS} ${OBJS}
	${AR} ${NAME} ${FT_PRINTF_OBJS} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} $< -I. -c -o $@

### CLEANUP COMMANDS ###

clean:
	${RM} ${OBJS} ${BONUS_OBJS} ${FT_PRINTF_OBJS} 

fclean: clean 
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus libft
