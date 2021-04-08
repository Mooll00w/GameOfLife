#-------------MakeFile-------------#
CC=gcc
CFLAGS= -W -Wall
SRC=src/
INC=-I inc/
EXEC= jeudelavie


jeudelavie: main.c compteur.c affiche.c menu.c taille.c main.h
	gcc -o jeudelavie main.c compteur.c affiche.c menu.c taille.c
