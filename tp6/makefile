parametrosCompilacao=-Wall -std=c90 #-Wshadow
nomePrograma=tp6

all: $(nomePrograma)

$(nomePrograma): main.o libpilha.o
	gcc -o $(nomePrograma) main.o libpilha.o $(parametrosCompilacao)

main.o: main.c
	gcc -c main.c $(parametrosCompilacao)

libpilha.o: libpilha.h libpilha.c
	gcc -c libpilha.c $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
