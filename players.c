#include "players.h"
#include "stdlib.h"
/* Get a player's move */
void get_player_move(void)
{
  int x, y;

  printf("Enter X, Y coordinates for your move on board: ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(board[x][y]!=' ')
  {
    printf("Invalid move, try again.\n");
    get_player_move();
  }
  else board[x][y] = 'X';
}

void get_computer_move(void)
{
  int i, j;
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      if(board[i][j]==' ') break;
    }
    if(board[i][j]==' ') break;
  }

  if(i*j==9) 
  {
    printf("draw\n");
    exit(0);
  }
  else
  board[i][j] = 'O';
}