NAME = read_file

SRCS = src/mx_main.c src/mx_strlen.c src/mx_printerr.c
SRCSOB = mx_main.c mx_strlen.c mx_printerr.c

INC = inc/minilibmx.h
INCOB = minilibmx.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all