// random number generation 
#include <stdlib.h>
#include <stdio.h>

// function main
int main( void )
{
  unsigned int i; // counter
  unsigned int seed; // number used to seed the random number generator

  printf( "%s", "Enter seed: " );
  scanf( "%u", &seed );

  srand( seed ); // seed the random number generator

  // loop 20 times
  for ( i = 1; i <= 20; i++ ) {
    // pick random number from 1 to 6 and ouput it
    printf("%10d", 1 + ( rand() % 6 ) );

    // if counter is divisible by 5, begin new line of output
    if ( i % 5 == 0 ) {
      puts( "" );
    } // end if
  } // end for
} // end function main