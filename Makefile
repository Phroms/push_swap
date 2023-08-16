# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 17:33:58 by agrimald          #+#    #+#              #
#    Updated: 2023/08/16 19:01:38 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -MMD
NAME = push_swap 
ARC = ar rcs
RM = rm -f
HEADER = push_swap.h
SRC = ft_strlen ft_atol checker_space

OBJ = $(SRC: .c=.o)

all: $(NAME)

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
