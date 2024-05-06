// Class average program with counter-controlled repetition
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  unsigned int counter; // Number of grade to be entered next
  int grade; // Grade value
  int total; // Sum of grades entered by user
  int average; // Average of grades

  // Initialization phase
  total = 0; // Initialize total
  counter = 1; // Initialize loop counter

  // Processing phase
  while ( counter <= 10 ) { // loop 10 times
    printf( "%s", "Enter grade: " ); // Prompt for input
    scanf( "%D", &grade ); // Read grade from user
    total = total + grade; // Add grade to total
    counter = counter + 1; // Increment counter
  } // End while

  // Termination phase
  average = total / 10; // Integer division

  printf( "Class average is %d\n", average);
} // End function main