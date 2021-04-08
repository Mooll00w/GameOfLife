#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
  return nombre_cout;
}
