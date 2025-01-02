CC = gcc
OUTPUT_DIR = output/

all: linked-list clean

%.o: %.c
	$(CC) -c $^

linked-list: linked-list.o main.c
ifdef OUTPUT_DIR
	if [ ! -d $(OUTPUT_DIR) ]; then mkdir $(OUTPUT_DIR); fi
endif
	$(CC) -o $(OUTPUT_DIR)$@ $^

clean:
	rm *.o