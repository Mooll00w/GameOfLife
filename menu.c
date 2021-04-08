///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// menu.c                                                            //
// Needed to launch every functions.                                 //
//                                                                   //
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
This function allow us to get to a pre-menu when the use launch the Programm
It's only writing and the programm wait for the user to type : "ENTER"
*/

void mainMenu(void)
{

system(CLEAN_SCREEN);

printf("+-----------------------------------------------------------+\n");
printf("+                      Jeu de la vie                        +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+                                                           +\n");
printf("+            Appuyez sur Entrée pour continuer...           +\n");
printf("+-----------------------------------------------------------+\n");

getchar();// waiting for the user to press "ENTER"

system(CLEAN_SCREEN);

choixMenu();

}

/*
It's mainly a menu mode for futur updates, the user can only get to
1: Lancer le Jeu de la Vie, and let him go to affiche.c functions
If the user don't enter 1, he get back to the same menu, over and over.
*/

void choixMenu(void)
{
  
  printf("+-----------------------------------------------------------+\n");
  printf("+                      Jeu de la vie                        +\n");
  printf("+                                                           +\n");
  printf("+   1: Lancer le Jeu de la Vie ( Taille 10 par défaut )     +\n");
  printf("+                                                           +\n");
  printf("+   2: Choix de la Taille                                   +\n");
  printf("+                                                           +\n");
  printf("+   3: Créer sa partie                                      +\n");
  printf("+                                                           +\n");
  printf("+                                                           +\n");
  printf("+       Faites votre choix puis appuyez sur Entrée...       +\n");
  printf("+-----------------------------------------------------------+\n");

  int choix=0;

  scanf("%d",&choix);

  if(choix!=1 && choix!=2 && choix!=3)
  {
    printf("Veuillez recommencer...\n");
    choix=0;
    system("sleep 0.5");
    system(CLEAN_SCREEN);
    choixMenu();
  }
  /*
  Make a choice for the user and add security to our programm.
  */
  else
  {
    switch (choix)
    {
      case 1:
        system(CLEAN_SCREEN);
        printf("Choix numéro 1 selectionné\n");
        system ("sleep 1.5");
        system(CLEAN_SCREEN);
        afficheJeu(); // get to affiche.c --> afficheJeu();
        break;
      case 2:
        system(CLEAN_SCREEN);
        printf("Choix numéro 2 selectionné\n");
        system ("sleep 1.5");
        system(CLEAN_SCREEN);
        taille();
        break;
      default:
        system(CLEAN_SCREEN);
        printf("Veuillez recommencer...\n");
        system("sleep 0.5");
        system(CLEAN_SCREEN);
        choixMenu();
        break;
    }
  }
}
