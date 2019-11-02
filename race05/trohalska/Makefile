NAME = race05

SRCS = src/newtest.c src/mx_strlen.c
SRCSOB = newtest.c mx_strlen.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lcurses

all: install clean

install: 
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)

uninstall: clean
	@rm $(NAME)

clean: 
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)

reinstall: uninstall clean all
