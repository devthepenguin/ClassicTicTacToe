/*Tic Tac Toe*/
#include<stdio.h>
#include<stdlib.h>
#include "check.c"
#include "matrices.c"
#include "players.c"

char board[3][3]; /*the tic tac toe game board matrix*/

int main(void)
{

  char complete;

  printf("Welcome to classic Tic Tac Toe.\n");
  printf("Your opponent is the computer.\n");
  printf("The game is on!\n");

  complete = ' ';

matrix_init();

do
{
  matrix_disp();
  get_player_move();
  complete = check(); /* check if there is a winner*/
  if(complete!=' ') break; /* winner*/
  get_computer_move();
  complete = check(); /* check if there is a winner*/

}while(complete == ' ');

if(complete == 'X') printf("You won!\n");
else printf("The computer won!\n");
matrix_disp(); /* show final positions on board*/

return 0;

}