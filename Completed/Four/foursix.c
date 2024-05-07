// Compound interest
#include <stdio.h>
#include <math.h>

// Function main begins program execution
int main( void )
{
  double amount; // Amount on deposit
  double principal = 1000.0; // Starting principal
  double rate = .05; // Annual interest rate
  unsigned int year; // Year counter

  // Output table column heads
  printf( "%4s%21s\n", "Year", "Amount on deposit" );

  // Calculate amount on deposit for each year of ten years
  for ( year = 1; year <= 10; year++ ) {

    // Calculate new amount for specified year
    amount = principal * pow( 1.0 + rate, year );

    // Output one table row
    printf( "%4u%21.2f\n", year, amount );
  } // End for

} // End function main