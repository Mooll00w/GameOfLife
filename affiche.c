#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void afficheJeu(void){
int grid[N][N] = {
              {0,0,0,0,0,0,0,1,1},
              {0,0,0,0,0,0,0,1,0,1},
              {0,0,1,0,0,0,0,1,0,1,1},
              {0,1,1,0,0,0,0,0,1,0,0},
              {1,0,0,1,0,0,0,0,0},
              {1,1,1,0,0,0,0,1,0},
              {0,0,0,0,0,0,0,0,0},
              {0,0,0,0,0,0,0,0,0,0,1,1,1},
              {0,0,0,0,0,0,0,0,0,1,0,0,1},
              {0,0,0,0,1,0,0,0,0,0,1,1},
              {0,0,1,1,0,1,0,0,0,0,1},
              {0,0,0,1,0,1,0,0,0},
              {0,0,0,0,1,1,0,0,0},
              };
int voisinage_count[N][N];
int i, j, steps=0;
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
        printf("\tX");
      else
        printf("\t.");
      voisinage_count[i][j] = count_nbr (grid,i,j,N);
    }
  }
  for ( i = 0; i < N; i++)
  {
    for ( j = 0; j < N; j++)
    {
      if ( grid[i][j] >= 1)
      {
        if ( voisinage_count[i][j] <= 1 || voisinage_count[i][j] >=4)
          grid[i][j] = 0;
      }
      else
        if (voisinage_count[i][j] == 3)
          grid[i][j] = 1;
    }
  }

  printf("\n\n");
  system("sleep 0.2");

};
}
