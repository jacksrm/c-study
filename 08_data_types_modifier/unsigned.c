#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num = 3000000000;            // This value exceeds the range of a normal int;
  unsigned int u_num = 3000000000; // This value is within the range of an unsigned int;

  printf("Signed int: %d\n", num);     // This will likely print a negative number due to overflow
  printf("Unsigned int: %u\n", u_num); // This will print the correct value of 3000000000
  return 0;
}
