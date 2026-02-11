# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 14:56:45 by gmateus-          #+#    #+#              #
#    Updated: 2026/01/20 18:42:35 by gmateus-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Werror -Wall -Wextra -g3 -I. -I.. 
SRC_FOLDER = src
SRCS = $(addprefix $(SRC_FOLDER)/, main.c utils.c parsing.c nodes.c operations1.c operations2.c small_sort.c radix.c)
OBJS = $(SRCS:.c=.o)	

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)

	@make -s bonus -C Libft
	@cp ./Libft/libft.a .
	@$(CC) $(CFLAGS) $(OBJS) libft.a -o $(NAME)
	@echo "Ok Sr., biblioteca disponivel para a utilizacao."
	@echo "Apos as magias negras para a realizacao do codigo e a sua tamanha eficiencia, o mesmo esta compilado."

clean:
	@find . -name '*.o' -delete
	@echo "Objetos completamente obliterados Sr."

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.a
	@make -s fclean -C Libft
	@echo  "Biblioteca questionando a sua existencia, apos a mesma ser apagada da realidade que estamos."

re: fclean all
		@echo "A recompilacao foi executada como pedido Sr., as suas ordens."

.PHONY: all clean fclean re