# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 11:33:23 by agrimald          #+#    #+#              #
#    Updated: 2023/10/07 14:54:22 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_PATH = ./src
INC_PATH = ./inc

SRCS = $(addprefix $(SRC_PATH)/, array3.c \
	   array4.c \
	   array5.c \
	   ft_atoi.c \
       pa.c \
       pb.c \
       push_swap.c \
       rr.c \
       rrr.c \
       ss.c \
	   set_index.c \
	   errors.c \
	   split_chunks.c \
	   werror.c)

CC = cc
RM = rm- f
CFLAGS = -Wall -Werror -Wextra

%.o: %.c
		@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		@${CC} ${SRCS} -o ${NAME}
		@echo "Everything Done! :D"

clean:
		@${RM} ${OBJS}
		@echo "Objects Remove 🗑 "

fclean:
		@${RM} ${OBJS}
		@echo "Everythings Remove 🗑 "

re: fclean all

.PHONY: all clean fclean re
