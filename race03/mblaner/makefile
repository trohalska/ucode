all:   
	cp inc/minilibmx.h ./src
			
install:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o race03 ./src/*.c

uninstall:
	rm -rf race03

clean:
	rm -rf ./src/minilibmx.h

reinstall:
	make uninstall
	make all
	make install
	make clean