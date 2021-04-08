///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// compteur.c                                                            //
// Needed to launch every functions.                                 //
//                                                                   //
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
This part is the most important, it allows us to test every neighbours for each frame
of the 2D table. And mostly allow us to create the Torus for an infinite Univers
If the Population is in a corner, we're testing if ( depending on size ) a Population
already exist and applying GameOfLife to it. And we're using N which is a pre-processing
number, so we can have a great number for N, the Torus will always work, not depending
on the N value.
*/

int count_nbr ( int grid[N][N], int i, int j, int size)
{
  int nombre_cout = 0;
     if ( i - 1 >= 0 && j - 1 >=0)
    {
      if (grid[i-1][j-1] >= 1 )
        nombre_cout++;
    }
      else if (i == 0 && j == 0)

    {
      if (grid[N-1][N-1] >= 1 )
        nombre_cout++;
    }
     else if (i != 0 && j == 0)

    {
      if (grid[i-1][N-1] >= 1 )
        nombre_cout++;
    }
     else if (i == 0 && j != 0)

    {
      if (grid[N-1][j-1] >= 1 )
        nombre_cout++;
    }
    if (i-1 >= 0)
    {
      if(grid[i-1][j] >= 1)
        nombre_cout++;
    }
    else
    {
      if(grid[N-1][j] >= 1)
        nombre_cout++;
    }
    if (i-1 >= 0 && j+1 < N)
    {
      if(grid[i-1][j+1] >= 1)
        nombre_cout++;
    }
    else if(i == 0 && j == N-1)
    {
      if(grid[N-1][0] >= 1)
        nombre_cout++;
    }
     else if(i != 0 && j == N-1)
    {
      if(grid[i-1][0] >= 1)
        nombre_cout++;
    }
     else if(i == 0 && j != N-1)
    {
      if(grid[N-1][j+1] >= 1)
        nombre_cout++;
    }
    if (j-1 >= 0)
    {
      if(grid[i][j-1] >= 1)
        nombre_cout++;
    }
    else
    {
       if(grid[i][N-1] >= 1)
        nombre_cout++;
    }
    if (j+1 < N)
    {
      if(grid[i][j+1] >= 1)
        nombre_cout++;
    }
    else
    {
       if(grid[i][0] >= 1)
        nombre_cout++;
    }
    if (i+1 < N && j-1 >=0)
    {
      if(grid[i+1][j-1] >= 1)
        nombre_cout++;
    }
     else if(i == N-1 && j == 0)
    {
      if(grid[0][N-1] >= 1)
        nombre_cout++;
    }
     else if(i != N-1 && j == 0)
    {
      if(grid[i+1][N-1] >= 1)
        nombre_cout++;
    }
     else if(i == N-1 && j != 0)
    {
      if(grid[0][j-1] >= 1)
        nombre_cout++;
    }

    if (i+1 < N)
    {
      if(grid[i+1][j] >= 1)
        nombre_cout++;
    }
    else
    {
       if(grid[0][j] >= 1)
        nombre_cout++;
    }

    if (i+1 < N && j+1 < N)
    {
      if(grid[i+1][j+1] >= 1)
        nombre_cout++;
    }
     else if(i == N-1 && j == N-1)
    {
      if(grid[0][0] >= 1)
        nombre_cout++;
    }
     else if(i != N-1 && j == N-1)
    {
      if(grid[i+1][0] >= 1)
        nombre_cout++;
    }
     else if(i == N-1 && j != N-1)
    {
      if(grid[0][j+1] >= 1)
        nombre_cout++;
    }
  return nombre_cout; // returning every neighbours for a case.
}
