#include <stdio.h>

int main()
{
  int age, student_id;
  float height;
  char name[20];

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your height: ");
  scanf("%f", &height);
  printf("Enter your student ID: ");
  scanf("%d", &student_id);

  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Height: %.2f\n", height);
  printf("Student ID: %d\n", student_id);
}
