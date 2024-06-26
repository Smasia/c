// passing arrays and individual array elements to functions. 
#include <stdio.h>
#define SIZE 5

// function prototypes
void modifyArray( int b[], size_t size );
void modifyElement( int e );

// function main begins program execution
int main(void)
{
  int a[SIZE] = {0,1,2,3,4}; // initializse array a
  size_t i; // counter

  puts( "Effects of passing entire arrays by reference:\n\nThe values of the original array are:" );

  // output original array
  for ( i = 0; i < SIZE; i++ ) {
    printf( "%3d", a[i] );
  } // end for

  puts( "" );

  // pass array a to modifyArray by reference
  modifyArray(a, SIZE );

  puts( "The values of the modified array are:");

  // output modified values
  for ( i = 0; i < SIZE; i++ ) {
    printf( "%3d", a[i]);
  } // end for

  // output value of a[3]
  printf( "\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3] );

  modifyElement(a[3]); // pass array elemetns a[3] by value

  // output value of a[3]
  printf( "The value of a[3] is %d\n", a[3] );
} // end main

// in function modifyArray, "b" points to the original array "a" in memory
void modifyArray( int b[], size_t size )
{
  size_t j; // counter

  // multiply each array element by 2
  for ( j = 0; j < size; j++ ) {
    b[j] *= 2; // actually modifies orginal array
  } // end for
} // end function modifyArray

void modifyElement( int e )
{
  // multiply parameter by 2
  printf( "Value in modifyElements is %d\n", e *= 2 );
} // end function modifyElement


