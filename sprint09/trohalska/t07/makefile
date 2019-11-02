all:   
	cp inc/*.h ./src
		
install:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o calc ./src/*.c

uninstall:
	rm -rf calc

clean:
	rm -rf ./src/*.h

reinstall:
	make uninstall
	make all
	make install
	make clean