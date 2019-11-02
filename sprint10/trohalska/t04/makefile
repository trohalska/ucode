NAME = mx_wc

SRCS = src/mx_wc.c src/mx_strlen.c src/mx_printerr.c src/mx_isspace.c  src/mx_printchar.c src/mx_printint.c src/mx_printstr.c src/mx_strcmp.c
SRCSOB = mx_wc.c mx_strlen.c mx_printerr.c mx_isspace.c  mx_printchar.c mx_printint.c mx_printstr.c mx_strcmp.c

INC = inc/minilibmx.h
INCOB = minilibmx.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall:
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall all clean