# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 18:10:11 by agrimald          #+#    #+#              #
#    Updated: 2023/10/06 16:54:15 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra -g -MMD
PUSH = push_swap.h
SRC = free.c index.c input.c main.c nodes.c push.c radix.c rotate.c sort.c \
	  	sort_utils.c swap.c

OBJECTS = $(SRC:.c=.o)
DEPS = $(patsubst%.o,%.d,$(OBJECTS))

all: ${NAME}

%.o: %.c
	@printf "\rCompiling push_swap: $< \n"
	$(CC) -c ${CFLAGS} $< -o $@

${NAME}: ${OBJECTS} ${PUSH} Makefile
		cc ${CFLAGS} -o ${NAME} ${OBJECTS}
		@printf "program compile succesfully!\n"

clean:
	@rm -rf *.d
	@rm -rf *.o
	@printf "cleaned push_swap\n"

fclean: clean
		@rm ${NAME}
		@printf "cleaned object files!\n"

re: fclean all

-include $(DEPS)

.PHONY: clean all fclean re
