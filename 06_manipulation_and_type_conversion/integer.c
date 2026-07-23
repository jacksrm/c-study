#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 10;
  int b = 3;
  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int quotient = a / b; // Integer division results in a integer

  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", difference);
  printf("Product: %d\n", product);
  printf("Quotient: %d\n", quotient);
  return 0;
}
