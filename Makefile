# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oliver <oliver@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 18:01:26 by oliver            #+#    #+#              #
#    Updated: 2021/04/22 20:05:37 by oliver           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

LIBFT = ./libft/libft.a

OBJDIR = ./obj/
SRCDIR = ./
FLAGS = -Wall -Werror -Wextra

SRC_OUT =		character_out.c hex_out.c integer_out.c \
				pointer_out.c string_out.c unsigned_int_out.c \
				switchboard.c not_specifier.c ft_putchar_increment.c

SRC_HELPERS =	reset_flags.c

SRC_PRINTF =	ft_printf.c

OBJ = $(addprefix $(OBJDIR),$(SRC_OUT:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_HELPERS:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_//printf:.c=.o))

HEAD = ft_printf.h libft/libft.h

.PHONY: all re clean fclean main

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	gcc $(FLAGS) -I. -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	echo "Name command run successfully"

main: re
	gcc ft_printf.c ft_printf.a main.c libft/libft.a

clean:
	rm -rf $(OBJDIR)
	@echo "Running clean command..."

fclean: clean
	rm -rf $(NAME)
	@echo "Running fclean command..."

re: fclean all
	@echo "Running re command..."