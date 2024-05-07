// Break and continue statements
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  unsigned int x; // Counter

  // Loop 10 times
  for ( x = 1; x <= 10; x++ ) {

    // If x is 5, continue next iteration of loop
    if ( x == 5 ) {
      continue; // Skip remaining code in loop body
    } // End if

    // If x is 8, terminate loop
    if ( x == 8 ) {
      break; // Break loop
    } // End if

    printf( "%u ", x ); // Display value of x
  } // End for

  printf( "\nBroke out of loop at x == %u\n", x );
} // End function main