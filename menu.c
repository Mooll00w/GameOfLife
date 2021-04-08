#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
getchar();
system(CLEAN_SCREEN);
choixMenu();


}


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
  if(choix!=1 && choix!=2 && choix!=3){
    printf("Veuillez recommencer...\n");
    choix=0;
    system("sleep 0.5");
    system(CLEAN_SCREEN);
    choixMenu();
  }
  else{
  switch (choix) {
    case 1:
      system(CLEAN_SCREEN);
      printf("Choix numéro 1 selectionné\n");
      system ("sleep 1.5");
      system(CLEAN_SCREEN);
      afficheJeu();
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
}}}
