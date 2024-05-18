// game a game of chance
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// enumertation constants represents for function time
enum Status { CONTINUE, WON, LOST };

int rollDice( void ); // function prototype

// function main
int main( void )
{
  int sum; // sum of rolled dice
  int myPoint; // player must make this point to win

  enum Status gameStatus; // can contain CONTINUE, WIN or LOST

  // randomixe random number generator using current time
  srand( time( NULL) );
  sum = rollDice(); // first roll of the dice

  // determine game status based on sum of dice
  switch( sum ) {

    // win on first roll
    case 2: // 2 is a loser
    case 3: // 3 is a loser
    case 12: // 12 is a loser
      gameStatus = LOST; // game has been lost
      break;
    
    // remember point
    default:
      gameStatus = CONTINUE; // player should keep rolling
      myPoint = sum; // remember the point
      printf( "Point is %d\n", myPoint );
      break; // optional
  } // end switch

  // while game not complete
  while ( CONTINUE == gameStatus ) { // player should keep rolling
    sum = rollDice(); // roll dice again

    // determine game status
    if ( sum == myPoint ) { // win by making point
      gameStatus = WON; // game over, player won
    } // end if
    else {
      if ( 7 == sum ){ // lose by rolling 7
        gameStatus = LOST; // game over, player lost
      } // end if
    } // end else
  } // end while

  // diplay won or lost message
  if ( WON == gameStatus ) { // did player win?
    puts( "Player wins" );
  } // end if
  else { // player lost
    puts( "Player lost" );
  } // end else
} // end function main

// roll dice, calculate sum and display results
int rollDice( void )
{
  int dice1; // first dice
  int dice2; // second dice
  int workSum; // sum of dice

  dice1 = 1 + ( rand() % 6 ); // pick random dice1 value
  dice2 = 1 + ( rand() % 6 ); // pick random dice2 value
  workSum = dice1 + dice2; // sum dice1 and dice2

  // display results of this roll
  printf( "Player rolled %d + %d = %d\n", dice1, dice2, workSum );
  return workSum; // return sum of dice
} // end function rollDice