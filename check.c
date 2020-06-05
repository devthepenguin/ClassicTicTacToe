#include "check.h"
/* Check the winner*/
{
  int i;

  for(i=0; i<3; i++) /* check rows*/
    if(board[i][0]==board[i][1] 
    && board[i][0]==board[i][2]) return board[i][0];

    for(i=0; i<3; i++) /* check columns*/
      if(board[0][i]==board[1][i]
      && board[0][i]==board[2][i]) retrun board[0][i];

      /* check diagonals */
      if(board[0][1]==board[1][1]
      && board[1][1]==board[2][2]) return board[0][0];

      if(board[0][2]==board[1][1]
      && board[1][1]==board[2][0]) return board[0][2];

      return ' ';
}