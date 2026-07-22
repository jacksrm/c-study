#include <stdio.h>

int main()
{
  /**
   * There are many functions for input/output of data, but the basics and most used are:
   * - printf() -> For output
   * - scanf() -> For input
   *
   * Other functions for input:
   * - gets
   * - getc
   * - getch
   *
   * Other functions for output:
   * - putc
   * - puts
   * - putchar
   *
   * For input in file:
   * - fscanf
   * - fgets
   *
   * For output in file:
   * - fprintf
   * - fputs
   */

  // ### Basic printf
  // printf("hello world!");

  // ### Example with formatting
  // int age = 25;
  // float height = 1.75;
  // char option = 'S';
  // char name[20] = "Jacson Rodrigues";

  // printf("The age of %s is: %d\n", name, age);
  // printf("The height is: %e\n", height);
  // printf("The option is: %c\n", option);

  /**
   * When printing something in the terminal we use the format specifier according to the type of data:
   * - %d: Prints a Integer in Decimal format
   * - %i: Equal to %d
   * - %f: Prints a float point number on default format
   * - %e: Prints a float point number on scientific notation
   * - %c: Prints a single character
   * - %s: Prints a string
   */

  // ### Retrieving data from terminal
  // int age;
  // float height;
  // char option;
  // char name[20];

  // printf("Name: ");
  // scanf("%s", name);
  // printf("Age: ");
  // scanf("%d", &age);
  // printf("Height: ");
  // scanf("%f", &height);
  // printf("Option: ");
  // scanf(" %c", &option);

  // printf("The name is: %s\n", name);
  // printf("The age is: %d\n", age);
  // printf("The height is: %f\n", height);
  // printf("The option is: %c\n", option);
}