///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// taille.c                                                          //
// Needed to launch every functions.                                 //
// For futur updates ( allow the user to enter manually              //
// the size of the Torus)                                            //
//                                                                   //
///////////////////////////////////////////////////////////////////////

/*
Including all needed files for the taille.c
main.h is the needed header for all *.c files
*/

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
Next update file.
Not needed.
*/

void taille(void)
{

  system(CLEAN_SCREEN);
  printf("Veuillez rentrer la taille de votre jeu :\n");
  //scanf("%d\n",&N);
  afficheJeu();

}
