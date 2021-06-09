# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oliver <oliver@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 15:30:50 by ofriedhe          #+#    #+#              #
#    Updated: 2021/04/04 19:03:32 by oliver           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJDIR = ./obj/
SRCDIR = ./
FLAGS = -Wall -Werror -Wextra

SRC_BASE =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

SRC_ADD	=	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
		ft_strtrim.c ft_substr.c

SRC_BON =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
		ft_lstnew.c ft_lstsize.c ft_itoa_base.c

SRC_EXTRA = ft_isspace.c ft_itoa_base.c ft_putchar.c \
		ft_putstr.c ft_itoa_pointer.c ft_uitoa.c

OBJ = $(addprefix $(OBJDIR),$(SRC_BASE:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_ADD:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_BON:.c=.o))
OBJ += $(addprefix $(OBJDIR),$(SRC_EXTRA:.c=.o))

HEAD = libft.h

.PHONY: all re clean fclean

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

main:
	gcc main.c libft.a

$(OBJDIR)%.o: $(SRCDIR)%.c
	gcc $(FLAGS) -I. -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	echo "Running clean command..."

fclean: clean
	@rm -f $(NAME)
	echo "Running fclean command..."

re: fclean all
	echo "Running re command..."