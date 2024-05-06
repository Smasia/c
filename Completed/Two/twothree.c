// addition program
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  int integer1; // First number entered by user
  int integer2; // Second number entered by user
  int sum; // Variable where the sum will be stored

  printf( "Enter first integer\n" ); // Prompt
  scanf( "%d", &integer1 ); // Read an integer
  
  printf( "Enter second integer\n" ); // Prompt
  scanf( "%d", &integer2 ); // Read an integer

  sum = integer1 + integer2; // Assign total to sum
  printf( "Sum is %d\n", sum);

} // End function main 