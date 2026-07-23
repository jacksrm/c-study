#include <stdio.h>

int main(int argc, char const *argv[])
{
  float x = 5.5;
  float y = 2.2;
  float sum = x + y;
  float difference = x - y;
  float product = x * y;
  float quotient = x / y; // Floating-point division results in a float

  printf("Sum: %.2f\n", sum);
  printf("Difference: %.2f\n", difference);
  printf("Product: %.2f\n", product);
  printf("Quotient: %.2f\n", quotient);
  return 0;
}
