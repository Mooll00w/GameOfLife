///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// main.h                                                            //
// Needed to launch every functions.                                 //
//                                                                   //
///////////////////////////////////////////////////////////////////////
/*
Testing if we're on Windows or Linux/MacOS, because the fonction CLEAN_SCREEN
doesn't work the same on each OS. Next we add the needed library for this OS.
*/
#ifdef _WIN32
#include <Windows.h>
#define CLEAN_SCREEN "cls"
#else
#include <unistd.h>
#define CLEAN_SCREEN "clear"
#endif

#define N 25 // The size value for our table.

/*
Every functions declaration.
*/
int count_nbr ( int grid[N][N], int i, int j, int size);

int gennombre(int j);

void afficheJeu(void);

void mainMenu(void);

void choixMenu(void);

void taille();
