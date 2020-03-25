
output: main.o my_lib.a
	cc main.o my_lib.a -o my_app

main.o: main.c
	cc -c main.c

my_lib.a: my_lib.c
	cc -c my_lib.c
	ar -rcs my_lib.a my_lib.o


my_lib.a: my_lib.c

.PHONY: clean
clean:
	rm *.o

