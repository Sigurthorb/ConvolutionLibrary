setup:
	mkdir -p bin/include
	mkdir bin/obj

obj: setup
	gcc -c -O3 src/libConv.c -lm -fopenmp -o bin/obj/libConv.o

archive: obj
	ar rcs bin/include/libConv.a bin/obj/libConv.o

example: setup archive
	gcc -c -O3 -Wno-incompatible-pointer-types example.c -lm -o bin/obj/main.o
	gcc -O3 bin/obj/main.o -Lbin/include -lConv -lm -fopenmp -o bin/a.out

clean:
	rm -rf bin

all: clean setup obj archive example