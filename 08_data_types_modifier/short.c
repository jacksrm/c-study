#include <stdio.h>

int main(int argc, char const *argv[])
{
  short int num = 32767; // Short int maximum value
  printf("Signed short int: %d\n", num);

  num = 32768;                                         // This value exceeds the range of a short int
  printf("Big number updated (short int): %d\n", num); // This will likely print a negative number due to overflow
  return 0;
}
