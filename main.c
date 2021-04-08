///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// main.c                                                            //
// Needed to launch every functions.                                 //
//                                                                   //
///////////////////////////////////////////////////////////////////////

/*
Including all needed files for the main.c
main.h is the needed header for all *.c files
*/

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
First step when you launch the programm.
*/
int main(int argc, char const *argv[]) {

  mainMenu(); //Launch the main menu (menu.c)

//afficheJeu(); //if you don't need the menu, "comment" mainMenu() and uncomment this one

  return 0;

}
