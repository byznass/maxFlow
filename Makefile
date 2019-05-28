CC = g++
CFLAGS = -g -Wall -I$(CURDIR)

all:
	$(CC) $(CFLAGS) -c Main.cpp

clean:
	$(RM) count *.o *~