///////////////////////////////////////////////////////////////////////
//                                                                   //
// Project: GameOfLife with Torus Univers ( adding Mersenne_twister )//
// Made By : Romain Delaire / Thibault Chaix                         //
// gennombre.c                                                       //
// Mersenne_twister number generator                                 //
//                                                                   //
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "mtwister.h" // calling "mtwister.h" to use mtwister functions
#include "main.h"

/*
We're using MT to create pseudorandom number to create a random table each time
and have scientific results of it. For a more randomness of the Programm,
we're using a for to cast 10 number before return the results. ( not really needed)
*/

int gennombre(int j)
{
  double aleatoire;

  int res = 0;

  MTRand r = seedRand(j); // adding the rand() function to create a seed for our MT.

  for(int i=0; i<10; i++)
  {
    aleatoire = genRand(&r);
  }
/*
Now that we have our number between 1 and 0, we want to have a number equal to 1
or 0, so if it's between 0 and 0.5 we're returning 0, and above, we're returning 1.
*/

  if(aleatoire>0.5)
  {
    res = 1;
  }
  else if (aleatoire<=0.5)
  {
    res = 0;
  }
  else
    return 0;
    
  return res;
}
