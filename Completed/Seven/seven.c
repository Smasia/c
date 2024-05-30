// pointers
#include <stdio.h>

void square(int *yPtr);
void array(void);


int main( void )
{
  int x;
  int y;
  int *xPtr = &x;

  x = 4;

  puts("Before function square: ");
  printf("%d\n", x);
  printf("%d\n", xPtr);

  square(xPtr);

  puts("\nAfter function square: ");
  printf("%d\n", x);
  printf("%d\n", xPtr);

  *xPtr = 13;

  puts("\nAfter *xPtr has changed value: ");
  printf("%d\n", x);
  printf("%d\n", xPtr);

  xPtr = &y;

  puts("\nAfter xPtr has changed address: ");
  printf("%d\n", x);
  printf("%d\n", xPtr);
  printf("%d\n", *xPtr);

  array();
  
  return 0;
}

void square(int *yPtr)
{
  *yPtr = *yPtr * *yPtr;
}

void array(void)
{
  int a[3] = {1,2,3};
  int *aPtr = a;

  puts("\nBefore anything: ");
  printf("%d\n", a);
  printf("%d\n", *aPtr);
  printf("%d\n", *(aPtr + 1));
  printf("%d\n", *(aPtr + 2));

}