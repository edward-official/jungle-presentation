test:
	mkdir -p build
	gcc -std=c11 -Wall -Wextra -Wpedantic -I./sources -I./unity -c sources/calculator.c -o build/calculator.o
	gcc -std=c11 -Wall -Wextra -Wpedantic -I./sources -I./unity -c unity/unity.c -o build/unity.o
	gcc -std=c11 -Wall -Wextra -Wpedantic -I./sources -I./unity build/calculator.o build/unity.o tests/test_calculator.c -o build/test_calculator
	./build/test_calculator

clean:
	rm -rf build
