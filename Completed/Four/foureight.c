// Using do...while repetition statement.
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  unsigned int counter = 1; // Initialize counter

  do {
    printf( "%u ", counter ); // Display counter
  } while ( ++counter <= 10 ); // End do...while
} // End function main