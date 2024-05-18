// scoping
#include <stdio.h>

void useLocal( void );
void useStaticLocal( void );
void useGlobal( void );

int x = 1;

//function main
int main( void )
{
  int x = 5; // local variabel to main
  printf( "Local x in outer scope of main is %d\n", x );

  { // start new scope
    int x = 7; // local variable to new scope

    printf( "local x in inner scope of main is %d\n", x );
  }

  printf( "Local x in outer scope of main is %d\n", x );

  useLocal(); // useLocal has automatic local x
  useStaticLocal(); // useStaticLocal has static local x
  useGlobal(); // useGlobal uses global x
  useLocal(); // useLocal reinitializes automatic local x
  useStaticLocal(); // useStaticLocal x retains its prior value
  useGlobal(); // global x also retian its value

  printf( "\nLocal x in main is %d\n", x );
} // end main



// useLocal reinitializes local variable x during each call
void useLocal( void )
{
  // initialized each time useLocal is called
  int x = 25; 

  printf( "\nLocal x in useLocal is %d after entering useLocal\n", x );
  ++x;
  printf( "Local x in useLocal is %d before exiting useLocal\n", x );
} // end function useLocal



// useStaticLocal initializes static local variable x only the first time the function is called
void useStaticLocal( void )
{
  // initialized once before program startup
  static int x = 50;

  printf( "\nLocal static x in useStaticLocal is %d after entering useStaticLocal\n", x );
  ++x;
  printf( "Local static x in useStaticLocal is %d before exiting useStaticLocal\n", x );
} // end function useStaticLocal



// function useGlobal modifies global variable x during each call
void useGlobal( void )
{
  printf( "\nGlobal x in useGlobal is %d after entering useGlobal\n", x );
  x *= 10;
  printf( "Global x in useGlobal is %d before exiting useGlobal\n", x );
} // end function useGlobal