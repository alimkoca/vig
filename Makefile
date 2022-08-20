CC = gcc
CFLAGS = -I src/
CFILES = src/vig.c src/cipher.c 

.PHONY: vig

install:
	$(CC) $(CFILES) -o vig $(CFLAGS)

clean:
	rm vig *.o
