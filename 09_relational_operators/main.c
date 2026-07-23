#include <stdio.h>

int main(int argc, char const *argv[])
{
  /**
   * Relational Operators
   * Equal(==)
   * Not Equal(!=)
   * Greater Than(>)
   * Less Than(<)
   * Greater Than or Equal(>=)
   * Less Than or Equal(<=)
   */

  // int a = 10;
  // int b = 20;

  // printf("a == b: %d\n", a == b); // 0 (false)
  // printf("a != b: %d\n", a != b); // 1 (true)
  // printf("a > b: %d\n", a > b);   // 0 (false)
  // printf("a < b: %d\n", a < b);   // 1 (true)

  // Implicit conversion
  // int x = 5;
  // float y = 5.0;
  // char c = 'a';

  // printf("x == y: %d\n", x == y); // 1 (true)
  // printf("x != y: %d\n", x != y); // 0 (false)
  // printf("x > y: %d\n", x > y);   // 0 (false)
  // printf("x < y: %d\n", x < y);   // 0 (false)

  // printf("x >= c: %d\n", x >= c); // 0 (false)
  // printf("The ASCII value of '%c' is: %d\n", c, c);

  // Explicit conversion
  float m = 10.2;
  int n = 10;

  printf("m > n: %d\n", (int)m > n);
  printf("m == n: %d\n", m == n);
  return 0;
}
