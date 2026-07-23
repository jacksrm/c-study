#include <stdio.h>

int main(int argc, char const *argv[])
{
  /**
   * Arithmetic Operators
   * Sum(+)
   * Subtraction(-)
   * Multiplication(*)
   * Division(/)
   */

  // int n1, n2;
  // int sum, sub, mult, div;

  // printf("Enter two numbers: ");
  // scanf("%d %d", &n1, &n2);
  // sum = n1 + n2;
  // sub = n1 - n2;
  // mult = n1 * n2;
  // div = n1 / n2;

  // printf("Sum: %d\n", sum);
  // printf("Subtraction: %d\n", sub);
  // printf("Multiplication: %d\n", mult);
  // printf("Division: %d\n", div);

  /**
   * Assignment Operators
   * Assign(=)
   * Add and Assign(+=)
   * Subtract and Assign(-=)
   * Multiply and Assign(*=)
   * Divide and Assign(/=)
   */

  // int result;

  // result = 10;
  // printf("Result: %d\n", result);

  // result += 5;
  // printf("Result after adding 5: %d\n", result);

  // result -= 3;
  // printf("Result after subtracting 3: %d\n", result);

  // result *= 2;
  // printf("Result after multiplying by 2: %d\n", result);

  // result /= 4;
  // printf("Result after dividing by 4: %d\n", result);

  /**
   * Increment and Decrement Operators
   * Increment(++)
   * - Pre-increment: ++var (increments the value before using it)
   * - Post-increment: var++ (increments the value after using it)
   *
   * Decrement(--)
   * - Pre-decrement: --var (decrements the value before using it)
   * - Post-decrement: var-- (decrements the value after using it)
   */

  int num = 10;
  int result;

  printf("Initial value: %d\n", num);
  num++;
  printf("After post-increment: %d\n", num);
  num--;
  printf("After post-decrement: %d\n", num);

  num = 10; // Reset num to 10
  result = num++;
  printf("After post-increment - Num: %d, Result: %d\n", num, result);

  num = 10; // Reset num to 10
  result = ++num;
  printf("After pre-increment - Num: %d, Result: %d\n", num, result);

  num = 10; // Reset num to 10
  result = num--;
  printf("After post-decrement - Num: %d, Result: %d\n", num, result);

  num = 10; // Reset num to 10
  result = --num;
  printf("After pre-decrement - Num: %d, Result: %d\n", num, result);
  return 0;
}
