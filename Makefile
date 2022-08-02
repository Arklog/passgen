SRC=$(wildcard src/*.c) main.c
OBJ=${SRC:.c=.o}

NAME=passgen
CC=gcc
CFLAGS:= -Werror -Wall -Wextra -I. -I./lib
LIB=-L./lib -largs

ifdef DEBUG
	CFLAGS+=-g
endif

.PHONY: ${NAME} ${OBJ} clean fclean

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} ${LIB} -o ${NAME}

${OBJ}:
	${CC} ${CFLAGS} -c ${@:.o=.c} -o $@

clean:
	@-rm ${OBJ}

fclean:
	@-rm ${NAME}
