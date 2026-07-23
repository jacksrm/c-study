#include <stdio.h>

int main(int argc, char const *argv[])
{
  float score1, score2, score3;
  float ratio = 3, average;

  printf("Enter three scores: ");
  scanf("%f %f %f", &score1, &score2, &score3);

  average = (score1 + score2 + score3) / ratio;

  printf("Average score: %.2f\n", average);
  return 0;
}
