#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int option = 0;
  int secret_number, guess;

  printf("Main menu: \n");
  printf("1. Start Game\n");
  printf("2. Rules\n");
  printf("3. Exit\n");
  printf("Enter your option: ");

  scanf("%d", &option);

  switch (option)
  {
  case 1:
    printf("Starting the game...\n");
    srand(time(0));
    secret_number = rand() % 10;
    printf("Guess the secret number (between 0 and 9): ");
    scanf("%d", &guess);

    if (secret_number == guess)
    {
      printf("Congratulations! You guessed the secret number %d.\n", secret_number);
    }
    else
    {
      printf("Sorry, the secret number was %d. Better luck next time!\n", secret_number);
    }

    break;
  case 2:
    printf("Displaying the rules...\n");
    // Add code to display the rules here
    break;
  case 3:
    printf("Exiting...\n");
    // Add code to exit the program here
    break;
  default:
    printf("Invalid option. Please try again.\n");
  }
  return 0;
}
