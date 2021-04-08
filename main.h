#ifdef _WIN32
#include <Windows.h>
#define CLEAN_SCREEN "cls"
#else
#include <unistd.h>
#define CLEAN_SCREEN "clear"
#endif

#define N 20

int count_nbr ( int grid[N][N], int i, int j, int size);
void afficheJeu(void);
void mainMenu(void);
void choixMenu(void);
void taille();
