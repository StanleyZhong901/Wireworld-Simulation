CFLAGS = -Wall -ansi -pedantic
OBJ = wireworld.o wireworldDraw.o wireworldLogic.o newSleep.o color.o
CC = gcc
EXEC = wireworld

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

wireworld.o : wireworld.c wireworld.h wireworldDraw.h wireworldLogic.h newSleep.h color.h
	$(CC) -c wireworld.c $(CFLAGS)

wireworldDraw.o : wireworldDraw.c wireworldDraw.h color.h
	$(CC) -c wireworldDraw.c $(CFLAGS)

wireworldLogic.o : wireworldLogic.c wireworldLogic.h
	$(CC) -c wireworldLogic.c $(CFLAGS)

newSleep.o : newSleep.c newSleep.h
	$(CC) -c newSleep.c $(CFLAGS)

color.o : color.c color.h
	$(CC) -c color.c $(CFLAGS)

clean :
	rm -f $(EXEC) $(OBJ)
