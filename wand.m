all:main.o schritte.o antwort.o wand
wand.o:main.c
  cc -c schritte.c
schritte.o:schritte.c
  cc -c antwort.cc
antwort.o:antwort.c
  cc -c antwort.cc
wand:main.o schritte.o antwort.o
  cc -o wand main.o schritte.o antwort.o
