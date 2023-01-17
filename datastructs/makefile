.phony: all debug clean

all: bin/demo

debug: bin/debug

bin/debug: build/maing.o build/linkedlistg.o
	cc -g build/maing.o build/linkedlistg.o -o bin/debug

bin/demo: build/main.o build/linkedlist.o build/stack.o
	cc build/main.o build/linkedlist.o build/stack.o -o bin/demo

build/main.o: 
	cc -I include -o build/main.o -c src/main.c

build/linkedlist.o: src/linkedlist.c
	cc -I include -o build/linkedlist.o -c src/linkedlist.c

build/stack.o: src/stack.c
	cc -I include -o build/stack.o -c src/stack.c

build/maing.o: src/main.c
	cc -g -I include -o build/maing.o -c src/main.c

build/linkedlistg.o: src/linkedlist.c
	cc -g -I include -o build/linkedlistg.o -c src/linkedlist.c

clean:
	rm bin/* build/*

