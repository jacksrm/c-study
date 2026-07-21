#include <stdio.h>

int main()
{
  // To create a variable in C you have to use the following order:
  // TYPE "Space" NAME
  int age;
  int quantity;
  float height;
  char charater;
  char name[];
  
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
  return 0;
}