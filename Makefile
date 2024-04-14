CC=g++
CFLAGS=-Iinclude

all: app

app: src/main.cpp src/student.cpp
	$(CC) $(CFLAGS) -o bin/app src/main.cpp src/student.cpp

clean:
	rm -f bin/*
