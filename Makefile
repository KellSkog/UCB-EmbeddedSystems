main.out: main.o stats.o
	gcc $^ -o $@
test.out: test.o stats.o
	gcc $^ -o $@
$@.o: $@.c $@.h
	gcc -c $<
clean:
	-rm -rf *.out *.o
