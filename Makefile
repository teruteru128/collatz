COMPILER = gcc
CFLAGS = -g -Wall
LDFLAGS = 
LIBS =
INCLUDE = -I./include
TARGET = ./bin/collatz
OBJDIR = ./obj
SRCDIR = ./src
SOURCES = $(foreach dir, $(SRCDIR), $(wildcard $(dir)/*.c))
OBJECTS = $(subst $(SRCDIR),$(OBJDIR),$(SOURCES:.c=.o))

$(TARGET): $(OBJECTS) $(LIBS)
	$(COMPILER) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@[ -d $(OBJDIR) ]
	$(COMPILER) $(CFLAGS) $(INCLUDE) -o $@ -c $<

.PHONY: all clean

all: clean $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
