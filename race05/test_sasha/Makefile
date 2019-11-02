NAME = race05

SRCS = src/race05.c src/mx_strlen.c src/mx_printerr.c src/mx_isdigit.c src/mx_isspace.c src/mx_atoi.c src/mx_printchar.c src/mx_printint.c

SRCSOB = race05.c mx_strlen.c mx_printerr.c mx_isdigit.c mx_isspace.c mx_atoi.c mx_printchar.c mx_printint.c

INC = inc/minilibmx.h
INCOB = minilibmx.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang -o $(NAME) $(SRCSOB) -I $(INCOB) -lncurses
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall all clean