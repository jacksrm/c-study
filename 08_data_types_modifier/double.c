#include <stdio.h>

int main(int argc, char const *argv[])
{
  double num = 3.141592653589793;
  long double long_num = 3.141592653589793238463;

  printf("Double: %.15f\n", num);
  printf("Long Double: %.21Lf\n", long_num);
  return 0;
}
