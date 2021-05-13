CC=gcc
EXEC=main
OBJS=main.o trie.o
CFLAGS=-std=c99 -lm -Wextra -Wall -Werror -pedantic

ifeq ($(DEBUG),yes)
	CFLAGS += -g
	LDFLAGS +=
endif

$(EXEC) : ./obj/$(OBJS)
	mkdir -p obj
	@$(CC) $(CFLAGS) $^ -o $@
	@mv *.o ./obj

./obj/%.o : %.c
	@$(CC) -c $(CFLAGS) $< -o $@

main.o : $(OBJS)

clean:
	rm -fr ./obj/*.o $(EXEC)
clear:
	rm -fr $(EXEC)