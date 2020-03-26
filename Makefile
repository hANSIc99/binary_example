#gcc flags:
# -c assemble but do not link
# -g include debug information
# -o output

output: main.o my_lib.a
	cc -o my_app main.o my_lib.a 

main.o: main.c
	cc -c main.c

my_lib.a: my_lib_a.o my_lib_b.o
	ar -rsv my_lib.a my_lib_a.o my_lib_b.o

my_lib_a.o: my_lib_a.c
	cc -c my_lib_a.c -o my_lib_a.o

my_lib_b.o: my_lib_b.c
	cc -c my_lib_b.c -o my_lib_b.o
	

.PHONY: clean
clean:
	rm *.o

