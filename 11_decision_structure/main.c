#include <stdio.h>

int main(int argc, char const *argv[])
{

  /**
   * if structure
   *
   * Can use a if with a block { } or in a one-line statement without the block.
   *
   * if (condition) {
   *   *  // code to execute if condition is true
   *   *  // code to execute if condition is true
   * }
   *
   * if (condition)
   *   *  // code to execute if condition is true
   * -> out of the if block
   *
   * if else structure
   *
   * if (condition) {
   *   *  // code to execute if condition is true
   * } else {
   *   *  // code to execute if condition is false
   * }
   */

  int n1 = 10, n2 = 50;

  if (n1 > n2)
    printf("n1 is greater than n2\n");
  else
    printf("n2 is greater than n1\n");
  return 0;
}
