OBJS	= main.o util.o linear_search.o binary_search.o selection_sort.o insertion_sort.o bubble_sort.o quick_sort.o heap_sort.o linked_list.o queue.o stack.o
SOURCE	= main.c util.c linear_search.c binary_search.c selection_sort.c insertion_sort.c bubble_sort.c quick_sort.c heap_sort.c linked_list.c queue.c stack.c
HEADER	= util.h linear_search.h binary_search.h selection_sort.h insertion_sort.h bubble_sort.h quick_sort.h heap_sort.h linked_list.h queue.h stack.h
OUT	= main.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)
	./$(OUT)
	make clean

clean:
	rm -f $(OBJS) $(OUT)