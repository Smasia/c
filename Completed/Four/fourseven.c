// Counting letter grades with switch
#include <stdio.h>

// Function main begins program execution
int main( void ) {
  int grade; // One grade
  unsigned int aCount = 0; // Number of As
  unsigned int bCount = 0; // Number of Bs
  unsigned int cCount = 0; // Number of Cs
  unsigned int dCount = 0; // Number of Ds
  unsigned int fCount = 0; // Number of Fs

  puts( "Enter the letter grades." );
  puts( "Enter the EOF characters to end input." );

  // Loop until user types end-of-file key sequence
  while ( ( grade = getchar() ) != EOF ) {

    // Determine which grade was input
    switch ( grade ) { // Switch nested in while
      
      case 'A': // Grade was uppercase A
      case 'a': // or lowercase a
        ++aCount; // Increment aCount
        break; // Necessary to exit switch

      case 'B': // Grade was uppercase B
      case 'b': // or lowercase b
        ++bCount; // Increment bCount
        break; // Necessary to exit switch

      case 'C': // Grade was uppercase C
      case 'c': // or lowercase c
        ++cCount; // Increment cCount
        break; // Necessary to exit switch

      case 'D': // Grade was uppercase D
      case 'd': // or lowercase d
        ++dCount; // Increment dCount
        break; // Necessary to exit switch

      case 'F': // Grade was uppercase F
      case 'f': // or lowercase f
        ++fCount; // Increment fCount
        break; // Necessary to exit switch

      case '\n': // Ignore newlines,
      case '\t': // ignore tabs,
      case ' ': // and spaces in input
        break; // Exit switch

      default: // Catch all other characters
        printf( "%s", "Incorrect letter grade entered." );
        puts( " Enter a new grade." );
        break;
    } // End switch 
  } // End while

  // Ouput summary of results
  puts( "\nTotals for each letter grade are:" );
  printf( "A: %4u\n", aCount ); // Display number of A grades
  printf( "B: %4u\n", bCount ); // Display number of B grades
  printf( "C: %4u\n", cCount ); // Display number of C grades
  printf( "D: %4u\n", dCount ); // Display number of D grades
  printf( "F: %4u\n", fCount ); // Display number of F grades
} // End function main