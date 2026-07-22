#include <stdio.h>

int main()
{
  // To create a variable in C you have to use the following order:
  // TYPE "Space" NAME
  int age = 25;
  int quantity = 1;
  float height = 1.75;      // float point 4bytes
  double weight = 90.3;     // float point 8bytes
  char charater = 'A';      // single char
  char name[20] = "Sergio"; // array of chars

  /**
   * To create names for variables theres a few rules to follow:
   *
   * 1. Need to start with a letter or an "_"
   * 2. Can't start with a number
   * 3. C is case sensitive so `int age` and `int Age` are different
   * 4. Can't use reserved keywords like 'main', 'int', etc
   */

  /**
   * Primitive Data Types
   *
   * Integer -> int
   * Decimal -> float, double
   * Character -> char
   * Strings -> char[<size_of_string>] | ex: char name[20]
   *
   */

  /**
   * Integers has basically 4 types
   *
   * - char:  1byte
   * - short: 2bytes
   * - int:   4bytes
   * - long:  8bytes
   */
  printf("----- INTEGERS SIZE -----\n");
  printf("Size of char: %zu byte\n", sizeof(char));
  printf("Size of short: %zu bytes\n", sizeof(short));
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of long: %zu bytes\n", sizeof(long));
  /**
   * Float points have 3 types
   * - float:       4bytes
   * - double:      8bytes
   * - long double: 16bytes
   */
  printf("----- FLOAT POINT SIZE -----\n");
  printf("Size of float: %zu bytes\n", sizeof(float));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of long double: %zu bytes\n", sizeof(long double));
  return 0;
}