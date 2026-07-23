#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num = 214783647; // Int maximum value
  long int long_num = 214783647;

  printf("Signed int: %d\n", num);
  printf("Signed long int: %ld\n", long_num);

  long_num = 214783648;
  printf("Big number updated (long int): %ld\n", long_num);
  return 0;
}
