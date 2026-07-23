#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 10;
  float b = 3.5;
  float result = a + b; // Implicit type conversion from int to float

  printf("Result: %.2f\n", result);
  return 0;
}
