FILEPATH := $(realpath $(lastword $(MAKEFILE_LIST)))
CURDIR := $(shell cd $(dir $(FILEPATH));pwd)
DBDIR := $(CURDIR)/db
HSDIR := $(CURDIR)/hash
INC := -I$(CURDIR)

CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lsqlite3 -lm
BIN = scan

RPATH = -Wl,-rpath=$(DBDIR) -L$(DBDIR) 
LIBS = -ldb

all: $(BIN)

$(BIN): scan.o 
	$(CC) scan.o -o scan $(RPATH) $(LIBS) $(LDFLAGS)

scan.o: scan.c
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

$(DBDIR)/db.o: $(DBDIR)/db.c
	$(CC) $(CFLAGS) -c -o $@ $<
	
test:
	@chmod +x scandir
	@./scandir --with-no-filters

clean:
	@rm -f scan scan.o $(BIN)

.PHONY: test clean all
