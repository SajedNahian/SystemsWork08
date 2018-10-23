all: sieve.c
	gcc -o out sieve.c

run:
	./out

clean:
	rm *.o