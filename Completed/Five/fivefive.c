// Creating and using a programmer-defined function
#include <stdio.h>

int square( int y ); // Function prototype

int maximum( int x, int y, int z); // Function prototype

// Function main begins program execution
int main ( void )
{
  int x; // Counter
  int number1; // First integer entered by the user
  int number2; // Second integer entered by the user
  int number3; // Third integer entered by the user

  // Loop 10 times and calculate and output square of x each time
  for ( x = 1; x <= 10; x++ ) {
    printf( "%d ", square( x ) ); // Function call
  } // End for

  puts( "" );

  printf( "%s", "Enter three integers: ");
  scanf( "%d%d%d", &number1, &number2, &number3);

  // number1, number2 and number3 are arguments
  // to the maximum function call
  printf( "Maximum is: %d\n", maximum( number1, number2, number3 ));
} // End main

// Square function defenition return the square of its parameter
int square( int y ) // y is a copy of the argument to the function
{
  return y * y; // Return the square of y as an int
} // End function square

// Function maximum definitions
// x, y and z are parameters
int maximum( int x, int y, int z )
{
  int max = x; // Assume x is largest

  if ( y > max ) { // If y is larger than max,
    max = y; // assign y to max
  }

  if ( z > max ) {// If z is larger than max,
    max = z; // assign z to max
  }

  return max; // max is largest value
} // End function maximum