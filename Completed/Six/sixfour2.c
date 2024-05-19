//roll a six sided dice 6,000,000 times 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
#define SIZE2 20

int stringArray(void);
int staticArray(void);

// function main begins program execution
int main(void)
{
  size_t face; // random dice value 1-6
  unsigned int roll; // roll counter 1-6,000,000
  unsigned int frequency[SIZE] = {0};

  srand( time( NULL ) ); // seed random number generator

  // roll dice 6,000,000 times
  for ( roll = 1; roll <= 6000000; roll++ ) {
    face = 1 + rand() % 6;
    ++frequency[face];
  } // end for

  printf( "%s%17s\n", "Face", "Frequency" );

  // output frequency elemets 1-6 in tabular format
  for ( face = 1; face < SIZE; face++ ) {
    printf( "%4d%17d\n", face, frequency[face]);
  } // end for
  puts( "" );
  stringArray();
  staticArray();
} // end main



int stringArray(void)
{
  char string1[SIZE2]; // reserves 20 characters
  char string2[] = "string literal"; // reserves 15 characters
  size_t i; // counter

  // read string from user into array string1
  printf( "%s", "Enter a string (no longer than 19 characters): " );
  scanf( "%19s", string1 );

  // output strings
  printf( "string1 is: %s\nstring2 is: %s\n"
          "string1 with spaces between characters is:\n",
          string1, string2 );

  // output characters until null character is reached
  for ( i = 0; i < SIZE2 && string1[i] != '\0'; i++ ) {
    printf( "%c ", string1[i] );
  } // end for
  puts( "\n" );
} // end stringArray


void staticArrayInit(void);
void automaticArrayInit(void);


int staticArray(void)
{
  puts( "First call to each function:" );
  staticArrayInit();
  automaticArrayInit();

  puts( "\n\nSecond call to each function:" );
  staticArrayInit();
  automaticArrayInit();
} // end staticArray

void staticArrayInit(void)
{
  // initializes elements to 0 first time function is called
  static int array1[3];
  size_t i;

  puts( "\nValues on entering staticArrayInit:" );

  // ouput contents of array1
  for ( i = 0; i <= 2; i++ ) {
    printf( "array1[%u] = %d ", i, array1[i] );
  } // end for

  puts( "\nValues on exiting staticArrayInit:" );

  // modify and ouput contents of array1
  for ( i = 0; i <= 2; i++ ) {
    printf( "array1[%u] = %d ", i, array1[i] += 5);
  } // end for
} // end staticArrayInit



void automaticArrayInit(void)
{
  // initializes elements to 0 first time function is called
  int array2[3] = {1,2,3};
  size_t i;

  puts( "\n\nValues on entering automaticArrayInit:" );

  // ouput contents of array2
  for ( i = 0; i <= 2; i++ ) {
    printf( "array2[%u] = %d ", i, array2[i] );
  } // end for

  puts( "\nValues on exiting automaticArrayInit:" );

  // modify and ouput contents of array2
  for ( i = 0; i <= 2; i++ ) {
    printf( "array2[%u] = %d ", i, array2[i] += 5);
  } // end for
} // end automaticArrayInit