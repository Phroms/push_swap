# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 18:10:11 by agrimald          #+#    #+#              #
#    Updated: 2023/08/30 18:22:13 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: push_swap
CFLAGS: -Wall -Werror -Wextra -g -MD
PUSH: push_swap.h
SRC: check.c data.c free.c index.c instrucciones.c nodes.c push_swap.c \
	put_stacks.c radix_sort.c sort.c stacks.c

OBJECTS: $(SRC:.c=.o)
DEPS: $(patsubst%.o,%.d,$(OBJECTS))

all: ${NAME}

%.o: %.c
	@printf "\rCompiling push_swap: $< \n"
	$(CC) -c ${CFLAGS} $< -O $@

${NAME}: ${OBJECTS} ${PUSH} Makefile
		cc ${CFLAGS} -o ${NAME} ${OBJECTS}
		@printf "program compile succesfully!\n"

clean:
	@rm -rf *.d
	@rm -rf *.c
	@printf "cleaned push_swap\n"

fclean: clean
		@rm ${NAME}
		@printf "cleaned object files!\n"

re: fclean all

-include $(DEPS)

.PHONY: clean all fclean re
