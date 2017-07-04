CC= g++
CFLAGS= -ggdb -std=c++11 -Wall

main: Queue.h.gch
	$(CC) $(CFLAGS) main.cpp -o main
Queue.h.gch: Queue.h
	$(CC) $(CFLAGS) Queue.h
valgrind:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --track-origins=yes ./main
clean:
	rm -f main Queue.h.gch
