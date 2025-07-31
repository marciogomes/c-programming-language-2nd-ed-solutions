rwildcard = $(foreach d, $(wildcard $(1:=/*)), $(call rwildcard, $d, $2) $(filter $(subst *, %, $2), $d))

CC = gcc
CFLAGS = -ansi
SOURCES = $(call rwildcard, ., *.c)
TARGETS = $(SOURCES:%.c=%)

all: $(TARGETS) clean
clean:
	rm -rf $(TARGETS)