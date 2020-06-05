#include "matrices.h"
/*Initialize the matrix. */
void matrix_init(void)
{
  int i, j;

  for(i = 0; i<3; i++)
  {
    for(j = 0; j<3; j++)
    {
      board[i][j] = ' ';
    }
  }
}

/* Display the matrix on the screen*/
void matrix_disp(void)
{
  int t;

  for(t = 0; t < 3; t++)
  {
    printf(" %c | %c | %c ", board[t][0],
    board[t][1], board[t][2]);
    if(t!=2) printf("\n---|---|---\n");
  }
  printf("\n");
}