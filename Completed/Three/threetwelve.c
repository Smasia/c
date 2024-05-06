// Preincrementing and postincrementing
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  int c; // Define variabel

  // Demonstrate postincrement
  c = 5; // Assign 5 to c
  printf( "%d\n", c ); // Print 5
  printf( "%d\n", c++ ); // Print 5 then postincrement
  printf( "%d\n\n", c ); // Print 6

  // Demonstrate preincrement
  c = 5; // Assign 5 to c
  printf( "%d\n", c ); // Print 5
  printf( "%d\n", ++c ); // Preincrement then print 6
  printf( "%d\n", c ); // Print 6
  
} // End function main