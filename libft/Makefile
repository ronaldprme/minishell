# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 13:28:54 by tiagoliv          #+#    #+#              #
#    Updated: 2024/03/23 16:45:21 by tiagoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_FOLDER = obj/

PRINTF_FOLDER = printf/
PRINTF_HEADER = ft_printf.h
GNL_FOLDER = gnl/
PRINTF_LIB_NAME = libftprintf.a

IS_FOLDER = is/
IS_FILES = ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c ft_isint.c ft_isprint.c

MEM_FOLDER = mem/
MEM_FILES = ft_bzero.c  ft_calloc.c  ft_memchr.c  ft_memcmp.c  ft_memcpy.c  ft_memmove.c  ft_memset.c

PUT_FOLDER = put/
PUT_FILES = ft_putchar_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c

STR_FOLDER = str/
STR_FILES = ft_atoi.c  ft_atol.c  ft_strchr.c  ft_striteri.c  ft_strlcpy.c  ft_strncmp.c  ft_strtrim.c  ft_toupper.c \
		ft_itoa.c  ft_strjoin.c  ft_strlen.c  ft_strnstr.c  ft_substr.c ft_split.c \
		ft_strdup.c  ft_strlcat.c   ft_strmapi.c  ft_strrchr.c  ft_tolower.c ft_strcmp.c

EXTRA_FOLDER = extra/
EXTRA_FILES = ft_strcpy.c ft_strncpy.c ft_strnjoin.c

GNL_FILES = get_next_line.c get_next_line_utils.c

PRINTF_FOLDER = printf/
PRINTF_FILES = execute_flag.c ft_printf.c ft_printulong.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsigned_nbr.c

BONUS_FOLDER = lst/
BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SOURCES = \
	$(addprefix $(IS_FOLDER), $(IS_FILES)) \
	$(addprefix $(MEM_FOLDER), $(MEM_FILES)) \
	$(addprefix $(PUT_FOLDER), $(PUT_FILES)) \
	$(addprefix $(STR_FOLDER), $(STR_FILES)) \
	$(addprefix $(GNL_FOLDER), $(GNL_FILES)) \
	$(addprefix $(EXTRA_FOLDER), $(EXTRA_FILES)) \
	$(addprefix $(PRINTF_FOLDER), $(PRINTF_FILES)) \
	$(addprefix $(BONUS_FOLDER), $(BONUS_FILES)) 

OBJECTS = $(addprefix $(OBJ_FOLDER), $(SOURCES:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(OBJ_FOLDER):
	mkdir -p $(OBJ_FOLDER)

$(NAME): $(OBJ_FOLDER) $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_FOLDER)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re