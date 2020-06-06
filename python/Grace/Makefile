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

SRC = Grace.py

PY = /usr/bin/env python

all: $(NAME)

$(NAME): $(SRC)
	printf "#!/bin/bash\n\n$(PY) $(PWD)/$(SRC)\n" > $(NAME)
	chmod a+x $(NAME)

clean:
	rm -rf __pycache__

fclean: clean
	rm -rf $(NAME)

re: fclean all
