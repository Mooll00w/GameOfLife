#-------------MakeFile-------------#
CC=gcc
CFLAGS= -W -Wall
SRC=src/
INC=-I inc/
EXEC= jeudelavie


jeudelavie: main.c compteur.c affiche.c menu.c taille.c gennombre.c mtwister.c main.h mtwister.h
	gcc -o jeudelavie main.c compteur.c affiche.c menu.c taille.c gennombre.c mtwister.c
rand: gennombre.c mtwister.c mtwister.h
	gcc -o gennombre gennombre.c mtwister.c

DEBUG: main.c compteur.c affiche.c menu.c taille.c gennombre.c mtwister.c main.h mtwister.h
	gcc -g -Wall -ainsi -o jeudelavie main.c compteur.c affiche.c menu.c taille.c gennombre.c mtwister.c
