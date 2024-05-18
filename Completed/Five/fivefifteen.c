// Recursive fibonacci function 
#include <stdio.h>

unsigned long long int fibonacci( unsigned int n );

// function main
int main( void )
{
  unsigned long long int result; // fibonacci value
  unsigned int number; // nuber input by user

  // obtain integer from user
  printf( "%s", "Enter an integer: " ); 
  scanf( "%d", &number ); 

  // calculate fibonacci value for number input by user
  result = fibonacci( number );

  // display result
  printf( "Fibonacci( %u ) = %llu\n", number, result );
} // end main

// recursive definition of function fibonacci
unsigned long long int fibonacci( unsigned int n)
{
  // base case
  if ( 0 == n || 1 == n ) {
    return n;
  } // end if
  else {
    return fibonacci( n - 1 ) + fibonacci( n - 2 );
  } // end else
} // end function fibonacci
