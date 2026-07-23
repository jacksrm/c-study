#include <stdio.h>

int main(int argc, char const *argv[])
{
  unsigned long int num = 4000000000;
  unsigned int num2 = 4000000000;
  long int num3 = 4000000000;
  int num4 = 4000000000;

  printf("Unsigned long int: %lu\n", num);
  printf("Unsigned int: %u\n", num2);
  printf("Long int: %ld\n", num3);
  printf("Signed int: %d\n", num4); // This will likely print a negative number due to overflow

  return 0;
}
