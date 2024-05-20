// initializing multidimensial arrays 
#include <stdio.h>

void printArray( int a[][3] );

// function main begins program execution
int main(void)
{
  // initialize array1, array2, array3
  int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6} };
  int array2[2][3] = { 1, 2, 3, 4, 5 };
  int array3[2][3] = { { 1, 2 }, { 4 } };

  puts( "Values in array1 by row are:" );
  printArray(array1);

  puts( "Values in array2 by row are:" );
  printArray(array2);

  puts( "Values in array3 by row are:" );
  printArray(array3);
} // end main

//function to output array with two rows and three column
void printArray( int a[][3] )
{
  size_t i; // row counter
  size_t j; // column counter

  // loop through rows
  for ( i = 0; i <= 1; i++ ) {

    // output column rows
    for ( j = 0; j <= 2; j++ ) {
      printf( "%d ", a[i][j] );
    } // end inner for

    printf( "\n" );
  } // end outer for
} // function printArray