// Linear search of an array
#include <stdio.h>
#define SIZE 100
#define SIZE2 15

// function prototype
size_t linearSearch( const int array[], int key, size_t size );
size_t binarySearch( const int b[], int searchKey, size_t low, size_t high );
void printHeader( void );
void printRow( const int b[], size_t low, size_t mid, size_t high );

// function main begins program execution
int main(void)
{
  int a[SIZE]; // create array a
  int b[SIZE2];
  size_t x; // counter for initializing elements 0-99 of array a
  size_t i;
  int searchKey; // value to locate in array a
  int key; 
  size_t element; // variable to hold location of searchKey or -1
  size_t result;

  // create some data
  for ( x = 0; x < SIZE; x++ ) {
    a[x] = 2 * x;
  } // end for
  // create some data
  for ( i = 0; i < SIZE2; i++ ) {
    b[i] = 2 * i;
  } // end for

  puts( "Enter integer search key:" );
  scanf( "%d", &searchKey );

  // attamot to locate searchKey in array a
  element = linearSearch(a,searchKey,SIZE);

  // display results
  if ( element != -1 ) {
    printf( "Found value in element %d\n", element );
  } // end if
  else {
    puts( "Value not found" );
  } // end else

  printf( "%s", "Enter a number between 0 and 28: " );
  scanf( "%d", &key);

  printHeader();

  // search for key in array a
  result = binarySearch(b,key,0,SIZE2 - 1);

  // display results
  if ( result != -1 ) {
    printf( "\n%d found in array element %d\n", key, result );
  } // end if
  else {
    printf( "\n%d not found\n", key );
  } // end else
} // end main

// compare key to every element of array until the location is found or until the end of array is reached;
// return the subscript of element if the key is found or -1 if the key is not found
size_t linearSearch( const int array[], int key, size_t size)
{
  size_t n; // counter

  // loop through array
  for ( n = 0; n < size; n++ ) {

    if ( array[n] == key ) {
      return n; // return location of key
    } // end if
  } // end for

  return -1; // key not found
} // end function linearSearch

// function to perform binary search of an array
size_t binarySearch( const int b[], int searchKey, size_t low, size_t high )
{
  int middle; // variable to hold middle element of array

  // loop until low subscript is greater than high subscript
  while ( low <= high ) {

    // determine middle element of subarray being searched
    middle = ( low + high ) / 2;

    // display subarray used in this loop iteration
    printRow(b,low,middle,high);

    // if searchKey matched middle element, return middle
    if ( searchKey == b[middle] ) {
      return middle;
    } // end if

    // if searchKey less than middle element, set new high
    else if ( searchKey < b[middle] ) {
      high = middle - 1; // search low end og array
    } // end else if

    // if searchKey greater than middle element, set new low
    else {
      low = middle + 1; // search high end of array
    } // end else
  } // end while

  return -1; // searchKey not found
} // end function binarySearch

// print a header for the output
void printHeader( void )
{
  unsigned int i; // counter

  puts( "\nSubscripts:" );

  // output column head
  for ( i = 0; i < SIZE2; i++ ) {
    printf( "%3u ", i );
  } // end for

  puts( "" );

  // output line of - character
  for ( i = 0; i <= 4 * SIZE2; i++ ) {
    printf( "%s", "-" );
  } // end for

  puts( "" );
} // end function printHeader

// Print one row of output showing the current part of the array being processed
void printRow( const int b[], size_t low, size_t mid, size_t high )
{
  size_t i; // counter for iterating through array b

  // loop through entire array
  for ( i = 0; i < SIZE2; i++ ) {

    // display spaces if outside current subarray range
    if ( i < low || i > high ) {
      printf( "%s", "    " );
    } // end if
    else if ( i == mid ) {
      printf( "%3d*", b[i] );
    } // end else if
    else {
      printf( "%3d ", b[i] );
    } // end else
  } // end for

  puts( "" );
} // end function printRow