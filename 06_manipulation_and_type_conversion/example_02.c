#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 10;
  int b = 3;
  float quotient = (float)a / b; // 'a' is explicitly cast to float for floating-point division

  printf("Result: %.2f\n", quotient);
  return 0;
}
