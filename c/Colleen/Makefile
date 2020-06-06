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

NAME = Colleen

SRC = Colleen.c

OBJ = $(SRC:.c=.o)

OBJDIR = ./obj/

OBJS = $(addprefix $(OBJDIR), $(OBJ))

CC = clang

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I ./inc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRC)
	rm -rf $(OBJDIR)
	mkdir $(OBJDIR)
	$(CC) $(FLAGS) $(INCLUDES) -c $(SRC)
	mv $(OBJ) $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
