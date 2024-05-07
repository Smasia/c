// Counter-controlled repetition
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  unsigned int counter = 0; // Initialization

  while ( ++counter <= 10 ) { // Repetition condition
    printf( "%u\n", counter ); // Display counter
  } // End while
} // End function main