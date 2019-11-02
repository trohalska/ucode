all:   
	cp inc/*.h ./src
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c src/*.c
	ar -cr ./src/minilibmx.a *.o

install:
	install ./src/minilibmx.a ./minilibmx

uninstall:
	rm -rf minilibmx

clean:
	rm -r *.o
	rm -r ./src/*.a
	rm -r ./src/*.h

reinstall:
	make uninstall
	make all
	make install
	make clean