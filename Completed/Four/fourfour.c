// Counter-controlled repetition with the for statement
#include <stdio.h>

// Function main begins program execution
int main( void ) 
{
  unsigned int counter; // Define counter

  for ( counter = 1; counter <= 10; ++counter ) {
    printf( "%u\n", counter );
  } // End for
} // End function main