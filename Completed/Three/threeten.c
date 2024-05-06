// Analysis of examination results
# include <stdio.h>

// Function main begins program execution
int main( void )
{
  // Initialize variables in defenition
  unsigned int passes = 0; // Number of passes
  unsigned int fails = 0; // Number of fails
  unsigned int student = 1; // Student counter
  int result; // One exam result

  // Process 10 students using counter-controlled loop
  while ( student <= 10) {

    // Prompt user for input and obtain value from user
    printf( "%s", "Enter result ( 1=pass,2=fail ): ");
    scanf( "%d", &result);

    // If result 1, increment passes
    if ( result == 1) {
      passes = passes + 1;
    } // End if
    else { // Else, increment fails
      fails = fails + 1;
    } // End else

    student = student + 1; // Increment student counter
  } // End while

  // Termination phase; display number of passes and failures
  printf( "Passed %u\n", passes);
  printf( "Failed %u\n", fails);

  // If more than eight students passed, print "Bonus to instructor!"
  if ( passes >= 8 ) {
    puts( "Bonus to instructor!" );
  } // End if

} // End function main