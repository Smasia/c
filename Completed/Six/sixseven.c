// survey data analysis with arrays: 
// computing the mean, median and mode of the data.
#include <stdio.h>
#define SIZE 99

// function prototypes
void mean( const unsigned int answer[] );
void median( unsigned int answer[] );
void mode( unsigned int freq[], unsigned const int answer[] );
void bubbleSort( unsigned int a[] );
void printArray( unsigned const int a[] );

// function main begins program execution
int main(void)
{
  unsigned int frequency[10] = {0}; // initialize array frquency

  // initialize array response 
  unsigned int response[SIZE] =
  {6,7,8,9,8,7,8,9,8,9,
   7,8,9,5,9,8,7,8,7,8,
   6,7,8,9,3,9,8,7,8,9,
   7,8,9,8,9,8,9,7,8,9,
   6,7,8,7,8,7,9,8,9,2,
   7,8,9,8,9,7,9,7,5,3,
   5,6,7,2,5,3,9,4,6,4,
   7,8,9,6,8,7,8,8,7,8,
   7,4,4,2,5,3,8,7,5,6,
   4,5,6,1,6,5,7,8,7,};
  
  // process response
  mean( response );
  median( response );
  mode( frequency,response );
} // end main

// calculate average of all response values
void mean( const unsigned int answer[] )
{
  size_t j; // counter for totalling array elemetns
  unsigned int total = 0; // variable to hold sum of array elements

  printf( "%s\n%s\n%s\n", "********", "  Mean", "********" );

  // total response values
  for ( j = 0; j < SIZE; j++ ) {
    total += answer[j];
  } // end for

  printf( "The mean is the average value of the data\n"
          "items. The mean is equal to the total of\n"
          "all the data items divided by the number\n"
          "of all data items (%u). The mean value for\n"
          "this run is: %u / %u = %.4f\n\n",
          SIZE, total, SIZE, (double)total / SIZE );
} // end function mean

// sort array and determine median element's value
void median( unsigned int answer[] )
{
  printf( "\n%s\n%s\n%s\n%s",
          "********", " Median", "********",
          "The unsorted array of responses is" );

  printArray( answer ); // output unsorted array

  bubbleSort( answer ); // sort array

  printf( "%s", "\n\nThe sorted array is" );
  printArray( answer ); // output sorted array

  // display median elements
  printf( "\n\nThe median is element %u of\n"
          "the sorted %u element array.\n"
          "For this run the median is %u\n\n",
          SIZE / 2, SIZE, answer[ SIZE / 2] );
} // end function median

// determine most frequent response
void mode( unsigned int freq[], const unsigned int answer[] )
{
  size_t rating; // counter for accessing elements 1-9 of array freq
  size_t j; // counter for summarizing elements 0-98 of array answer
  unsigned int h; // counter for displaying histograms freq array values
  unsigned int largest = 0; // represents largest frequency
  unsigned int modeValue; // represents most frequent response

  printf( "\n%s\n%s\n%s\n",
          "********", "  Mode", "********");

  // initialize frequencies to 0
  for ( rating = 1; rating <= 9; rating++ ) {
    freq[rating] = 0;
  }

  // summarize frequencies
  for ( j = 0; j < SIZE; j++ ) {
    ++freq[answer[j]];
  }

  // output headeres for result columns
  printf( "%s%11s%19s\n\n%54s\n%54s\n\n",
          "Response", "Frequency", "Histogram",
          "1    1    2    2", "5    0    5    0    5" );
  
  // output results
  for ( rating = 1; rating <= 9; rating++ ) {
    printf( "%8u%11u           ", rating, freq[rating] );

    // keep track of mode value and largest frequency value
    if ( freq[rating] > largest ) {
      largest = freq[rating];
      modeValue = rating;
    } //  end if

    // ouput histogram bar representing frequency value
    for ( h = 1; h <= freq[rating]; h++ ) {
      printf( "%s", "*" );
    } // end inner for

    puts( "" ); // begin new line of ouput
  } // end outer for

  // diplay the mode value
  printf( "\nThe mode is the most frequent value.\n"
          "For this run the mode is %u which occurred"
          " %u times.\n", modeValue, largest);
} // end function mode

// function that sorts an array with bubble sort algorithm
void bubbleSort( unsigned int a[] )
{
  unsigned int pass; // pass counter
  size_t j; // comparison counter
  unsigned int hold; // temporary location used to swap elements

  // loop to control number of passes
  for ( pass = 1; pass < SIZE; pass++ ) {
    // loop to control number of comparisons per pass
    for ( j = 0; j < SIZE - 1; j++ ) {

      // swap elements if out of order
      if ( a[j] > a[j+1] ) {
        hold = a[j];
        a[j] = a[j + 1];
        a[j + 1] = hold;
      } // end if
    } // end inner for
  } // end outer for
} // end function bubbleSort

// output array contents (20 values per row)
void printArray( const unsigned int a[] )
{
  size_t j; // counter

  // output array contents
  for ( j = 0; j < SIZE; j++ ) {
    
    if ( j % 20 == 0 ) {
      puts( "" );
    } // end if

    printf( "%2u", a[j]);
  } // end for
} // end function printArray
