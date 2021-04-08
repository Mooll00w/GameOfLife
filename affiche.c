///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// affiche.c                                                         //
// Needed to launch every functions.                                 //
//                                                                   //
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
The main fonction of our entire Programm,it allow us to create a 2D Table
with random number on Mersenne_twister .c files. And it prompt the table on
the terminal screen.
*/

void afficheJeu(void)
{
  int grid[N][N];//grid initialisation

  int voisinage_count[N][N];//counter grid initialisation

  int i, j, steps=0;
/*
We're using a rand function to create a pseudo seed to allow Mersenne Twister
to work fine.
At the end we have a result of 1 or 0 to complete our Table.
*/
  for (i = 0; i < N; i++)
  {
    for ( j = 0; j < N; j++)
    {
      grid[i][j] = gennombre(rand());
    }
  }
/*
An infinity loop to prompt the table on screen and once it end, we clean the
terminal for and easier reading.
*/
  while (steps!=1)
  {
    system("sleep 0.2");

    system(CLEAN_SCREEN);

    for(i = 0; i < N; i++)
    {
      printf("\n\n");

      for(j = 0; j < N; j++)
      {
        if ( grid[i][j] == 1)
        {
          printf("\tX");
        }
        else
        {
          printf("\t.");
        }
        voisinage_count[i][j] = count_nbr (grid,i,j,N);
        // we're sending infos to count every neighbours in compteur.c
      }
    }
/*
We're now creating a new 2D Table with the results of voisinage_count with
the rules of the GameOfLife.
If <=1 or >=4, we're changing the value of the position to 0, and if it's equal
to 3 neighbours, we're modifying value to 1 so game can run without problems.
*/
    for ( i = 0; i < N; i++)
    {
      for ( j = 0; j < N; j++)
      {
        if ( grid[i][j] >= 1)
        {
          if ( voisinage_count[i][j] <= 1 || voisinage_count[i][j] >=4)
          {
            grid[i][j] = 0;
          }
        }
        else
          if (voisinage_count[i][j] == 3)
          {
            grid[i][j] = 1;
          }
      }
    }
  printf("\n\n");

  system("sleep 0.2");

  };
}
