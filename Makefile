# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 12:24:56 by dperez-a          #+#    #+#              #
#    Updated: 2023/10/18 12:24:59 by dperez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= libft.a
CFLAGS= -Wall -Wextra -Werror 
RM= rm -rf
CC= gcc
INCLUDE = libft.h
OBJ= $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)
BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC=\
    ft_atoi.c \
    ft_bzero.c \
    ft_calloc.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_itoa.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putnbr_fd.c \
    ft_putendl_fd.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_strtrim.c \
    ft_split.c \
    ft_strdup.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_strnstr.c \
    ft_strlcpy.c \
    ft_strlcat.c \
    ft_strlen.c \
    ft_strncmp.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_putstr_fd.c \
    ft_tolower.c \
    ft_toupper.c \
    
all: $(NAME)

$(NAME): $(OBJ)
	 ar rcs $(NAME) $(OBJ)
%.o: %.c libft.h
	$(CC)   $(CFLAGS) -c $<
bonus: $(BONUSOBJ)
	ar rcs $(NAME) $(BONUSOBJ) 
test: $(NAME) main_test.o
	$(CC) main_test.o -o prueba -L. -lft
clean:
	$(RM) $(OBJ) $(BONUSOBJ) main_test.o
fclean: clean
	$(RM) $(NAME) 
re: fclean $(NAME)

.PHONY: all clean fclean re
