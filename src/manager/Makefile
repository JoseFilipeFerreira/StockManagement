############################# Makefile ##########################
CFLAGS= -W -Wall -Wextra -O2 -D_GNU_SOURCE
UTILS=../utils
DOC = ../docs
OBJECTS:= manager.o article.o $(UTILS)/utils.o
EXECUTAVEL=ma

$(EXECUTAVEL): $(OBJECTS)
	cc -o $(EXECUTAVEL) $(OBJECTS) $(CFLAGS)
	mv $(EXECUTAVEL) ..

run:
	./$(EXECUTAVEL)

clean:
	rm -rf artigos strings ../$(EXECUTAVEL) *.o

grind:
	valgrind --leak-check=full --show-reachable=no --show-leak-kinds=all ./$(EXECUTAVEL)
  
article.o: article.c article.h
manager.o: manager.c article.o $(UTILS)/utils.o
