CC=gcc
EXEC=main
OBJS=main.o trie.o
CFLAGS=-std=c99 -lm -Wextra -Wall -Werror -pedantic

ifeq ($(DEBUG),yes)
	CFLAGS += -g
	LDFLAGS +=
endif

$(EXEC) : ./obj/$(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@mv *.o ./obj
	@mkdir -p bin
	@mv $(EXEC) ./bin

./obj/%.o : %.c
	@mkdir -p obj
	@$(CC) -c $(CFLAGS) $< -o $@

main.o : $(OBJS)

clean:
	rm -fr ./obj ./bin
clear:
	rm -fr ./bin/$(EXEC)