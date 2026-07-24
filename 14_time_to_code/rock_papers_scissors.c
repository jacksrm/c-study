#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  srand(time(0));

  int player_choice, computer_choice;

  printf("Welcome to Rock, Paper, Scissors!\n");
  printf("Choose your option:\n");
  printf("1. Rock\n");
  printf("2. Paper\n");
  printf("3. Scissors\n");
  printf("Enter your choice (1-3): ");
  scanf("%d", &player_choice);

  computer_choice = rand() % 3 + 1;

  switch (player_choice)
  {
  case 1:
    printf("Player: Rock - ");
    break;
  case 2:
    printf("Player: Paper - ");
    break;
  case 3:
    printf("Player: Scissors - ");
    break;
  default:
    printf("Invalid choice. Please enter a number between 1 and 3.\n");
    return 1;
  }

  switch (computer_choice)
  {
  case 1:
    printf("Computer: Rock\n");
    break;
  case 2:
    printf("Computer: Paper\n");
    break;
  case 3:
    printf("Computer: Scissors\n");
    break;
  }

  if (player_choice == computer_choice)
  {
    printf("It was a draw!");
    return 0;
  }

  switch (player_choice)
  {
  case 1:
    if (computer_choice == 2)
    {
      printf("Computer wins!");
    }
    else
    {
      printf("Player wins");
    }
    break;
  case 2:
    if (computer_choice == 3)
    {
      printf("Computer wins!");
    }
    else
    {
      printf("Player wins");
    }
    break;

  case 3:
    if (computer_choice == 1)
    {
      printf("Computer wins!");
    }
    else
    {
      printf("Player wins");
    }
    break;
  }
  return 0;
}
