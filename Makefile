CC=g++
CFLAGS=-Iinclude -std=c++11
LDFLAGS=-lsqlite3
SRCDIR=src
BINDIR=bin
SOURCES=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS=$(SOURCES:$(SRCDIR)/%.cpp=$(BINDIR)/%.o)

# 目标可执行文件
TARGET=$(BINDIR)/app

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BINDIR)/*

.PHONY: all clean
