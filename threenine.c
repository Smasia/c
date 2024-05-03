// Class average program with sentinel-controlled repetition
#include <stdio.h>

// Function main begins program execution
int main( void )
{
  unsigned int counter; // Number of grades entered
  int grade; // Grade value
  int total; // Sum of grades

  float average; // Number with decimal point for average
  
  // Initialization phase
  total = 0; // Initialize total
  counter = 0; // Initialize loop counter

  // Processing phase
  // Get first grade from user
  printf( "%s", "Enter grade, -1 to end: " ); // Prompt for input
  scanf( "%d", &grade ); // Read grade from user

  // Loop while sentinel value not yet read from user
  while ( grade != -1 ) {
    total = total + grade; // Add grade to total
    counter = counter + 1; // Increment counter
    
    // Get next grade from user
    printf( "%s", "Enter grade, -1 to end: " ); // Prompt for input
    scanf( "%d", &grade ); // Read grade from user
  } // End while

  // Termination phase
  // If user entered at least one grade
  if ( counter != 0 ) {

    // Calculate average of all grades entered
    average = ( float ) total / counter; // avoid truncation

    // Display average with two digits of precision
    printf( "Class average is %.2f\n ", average );
  } // End if
  else { // If no grades were entered, output message
  puts( "No grades were entered" );
  } // End else
} // End function main