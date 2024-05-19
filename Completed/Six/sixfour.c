// initilializing the elemetns of an array to zero
#include <stdio.h>
#define SIZE 10
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

int survey( void );

// function main begins program execution
int main(void)
{
  int n[SIZE]; // n is an array of 10 integers
  // use initializer list to initialize array o
  int o[SIZE] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
  size_t i; // counter
  int sum = 0; // sum of array

  // initialize elements of array n to 0
  for ( i= 0; i < SIZE; i++ ) {
    n[i] = 0; // set element at location i to 0
  } // end for

  printf( "%s%13s\n", "Element", "Value" );

  // ouput contents of array n in tabular format
  for ( i = 0; i < SIZE; i++ ) {
    printf( "%7u%13d\n", i, n[i] );
  } // end for

  puts( "" );


  // sum contents of array o
  for ( i = 0; i < SIZE; i++ ) {
    sum += o[i];
  } // end for
  printf( "Sum of array o element values is %d\n", sum );

  survey();
} // end main



int survey( void )
{
  size_t answer; // counter to loop through 40 responses
  size_t rating; // counter to loop through frequencey 1-10

  // initialize frequency counters to 0
  int frequency[FREQUENCY_SIZE] = {0};

  // place the survey responses in the responses array
  int responses[RESPONSES_SIZE] = {1,2,6,4,8,5,9,7,8,10,1,6,10,3,8,2,7,6,5,7
                                  ,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10,3,2,1};

  // for each answer, select value of an element of array responses and use that value
  // as subscript in array frequency to determine element to increment
  for ( answer = 0; answer < RESPONSES_SIZE; answer++ ) {
    ++frequency[ responses[ answer ] ];
  } // end for

  puts( "" );
  // display result
  printf( "%s%17s\n", "Rating", "Frequency" );

  // output the frequencies in a tabular format
  for ( rating = 1; rating < FREQUENCY_SIZE; rating++ ) {
    printf( "%6d%17d\n", rating, frequency[ rating ] );
  } // end for
} // end function survey