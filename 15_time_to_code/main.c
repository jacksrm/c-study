#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int player_num, computer_num, correct_guess;
  char comparison_type;

  // Generate random number
  srand(time(0));
  computer_num = rand() % 100 + 1; // Number between 1 and 100;

  // Start of the game
  printf("Welcome to Bigger, Lesser or Equal game!\n");
  printf("You must choose a number and a comparison type\n");
  printf("#############\n");
  printf("# B. Bigger #\n");
  printf("# L. Lesser #\n");
  printf("# E. Equal  #\n");
  printf("#############\n\n");

  printf("Choose a comparison type: ");
  scanf(" %c", &comparison_type);

  printf("Choose a number (between 1 and 100): ");
  scanf("%i", &player_num);

  switch (comparison_type)
  {
  case 'B':
  case 'b':
    printf("You think your number is Bigger than the computer number!\n");
    correct_guess = player_num > computer_num;
    break;

  case 'L':
  case 'l':
    printf("You think your number is Lesser than the computer number!\n");
    correct_guess = player_num < computer_num;
    break;

  case 'E':
  case 'e':
    printf("You think your number is Equal to the computer number!\n");
    correct_guess = player_num == computer_num;
    break;

  default:
    printf("Invalid option!");
    break;
  }

  printf("You are ");
  if (correct_guess)
  {
    printf("Correct!!! Congrats! ");
  }
  else
  {
    printf("Wrong... too bad! ");
  }

  printf("The computer number is: %i\n", computer_num);

  return 0;
}
