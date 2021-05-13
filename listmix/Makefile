CC=gcc
EXEC=main
OBJS=main.o queue.o list.o
INCS=./inc
CFLAGS=-std=c99 -lm -Wextra -Wall -Werror -pedantic -I$(INCS)

ifeq ($(DEBUG),yes)
	CFLAGS += -g
	LDFLAGS +=
endif

$(EXEC) : ./obj/$(OBJS)
	@$(CC) $(CFLAGS) $^ -o ./bin/$@
	@mv *.o ./obj

./obj/%.o : %.c
	@mkdir -p bin obj
	@$(CC) -c $(CFLAGS) $< -o $@

main.o : $(OBJS)

clean:
	rm -fr ./obj/*.o ./bin/$(EXEC)
	mv $(INCS)/*.h .
clear:
	rm -fr $(EXEC)
