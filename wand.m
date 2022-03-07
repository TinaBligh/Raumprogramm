wand: main.o schritte.o antwort.o
  cc -c wand main.o schritte.o antwort.o

main.o: main.c
  cc -c main.c

antwort.o: antwort.c
  cc -c antwort.c

schritte.o: schritte.c
  cc -c schritte.c
