NAME = race04

SRCS = src/race04.c src/mx_strlen.c src/mx_printerr.c src/mx_isdigit.c src/mx_isspace.c src/mx_atoi.c src/mx_printchar.c src/mx_printint.c src/wave.c src/checks.c src/count_width.c src/count_height.c src/getrows.c


SRCSOB = race04.c mx_strlen.c mx_printerr.c mx_isdigit.c mx_isspace.c mx_atoi.c mx_printchar.c mx_printint.c wave.c checks.c count_width.c count_height.c getrows.c

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
reinstall: uninstall all clean