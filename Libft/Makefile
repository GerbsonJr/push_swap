# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 14:39:42 by gmateus-          #+#    #+#              #
#    Updated: 2025/12/05 13:38:17 by gmateus-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
        ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
        ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
        ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
        ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
        ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_printf_utils.c ft_printf.c get_next_line.c get_next_line_utils.c

BONUS =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(FILES:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
INCLUDE = -I .

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $<

$(NAME): $(OBJ)
	@echo "Objetos criados e disponiveis para a execução Sr."
	@$(AR) $(NAME) $(OBJ)
	@echo "Libft.a disponivel para a utilização Sr."

bonus: $(OBJ) $(BONUS_OBJ)
	@$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

clean :
	@$(RM) $(OBJ) $(BONUS_OBJ)
	@echo "Objetos completamente deletados Sr."

fclean : clean
	@$(RM) $(NAME)
	@echo "Todos os arquivos foram precisamente obliterados Sr."

re : fclean all
	@echo "Arquivos corretamente recompilados Sr."

.PHONY: all bonus clean fclean re
