CC ?= gcc
PKGCONFIG = $(shell which pkg-config)
CFLAGS = $(shell $(PKGCONFIG) --cflags gtk+-3.0)
LIBS = $(shell $(PKGCONFIG) --libs gtk+-3.0)

BUILD_DIR = bin
BUILD_SRC = composite_test.c \
			component.c \
			composite.c \
			default_composite.c \
			leaf.c
			

OBJS = $(BUILD_SRC:.c=.o)

all: clean composite

bin/%.o: src/%.c
	$(CC) $(CFLAGS) -c -o bin/$(@F) $<

composite: $(OBJS)
	$(CC) -Wall -std=c99 $(CFLAGS) $(OBJS) -o $(BUILD_DIR)/$(@F) $(LIBS)

clean:
	rm -f $(OBJS)
	rm -f bin/composite
