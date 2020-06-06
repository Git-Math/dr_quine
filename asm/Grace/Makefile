#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnguyen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/12 18:52:41 by mnguyen           #+#    #+#              #
#    Updated: 2018/12/12 18:52:46 by mnguyen          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Grace

SRC = Grace.s

OBJ = $(SRC:.s=.o)

D = $(SRC:.s=.d)

OBJDIR = ./obj/

OBJS = $(addprefix $(OBJDIR), $(OBJ))

OBJD = $(addprefix $(OBJDIR), $(D))

ASM = nasm -f elf64

CC = clang

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I ./inc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRC)
	rm -rf $(OBJDIR)
	mkdir $(OBJDIR)
	$(ASM) $(INCLUDES) -MD $(OBJD) $(SRC) -o $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
