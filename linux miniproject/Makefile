target: all out clean
all:test.o
	gcc  test.o -o all.out -pthread

test.o:
	gcc -c test.c

clean:
	rm -rf *.o *.out

out:
	.\/all.out
