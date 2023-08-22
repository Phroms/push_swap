# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 20:37:42 by agrimald          #+#    #+#              #
#    Updated: 2023/08/22 20:42:00 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror - g -MMD
NAME = push_swap
ARC = ar rcs
RM = rm -f
HEADER = push_swap.h
SRC = 

OBJ = $(SRC: .c=.o)

all = $(NAME)

$(NAME): $(OBJS)
		$(ARC) $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
				$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
