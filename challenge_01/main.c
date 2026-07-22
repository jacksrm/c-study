#include <stdio.h>

int main()
{
  char state;
  char code[3];
  char city[20];
  int population;
  float area;
  float gdp;
  int touristic_spots;

  printf("### First Card ###\n");
  printf("Enter the state (single character): ");
  scanf(" %c", &state);
  printf("Enter the state code (2 characters): ");
  scanf(" %2s", code);
  printf("Enter the city name: ");
  scanf(" %19s", city);
  printf("Enter the population: ");
  scanf(" %d", &population);
  printf("Enter the area (in square kilometers): ");
  scanf(" %f", &area);
  printf("Enter the GDP (in billions): ");
  scanf(" %f", &gdp);
  printf("Enter the number of touristic spots: ");
  scanf(" %d", &touristic_spots);

  printf("\n--- Card 01 ---\n");
  printf("State: %c\n", state);
  printf("State Code: %s\n", code);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f km²\n", area);
  printf("GDP: %.2f billion\n", gdp);
  printf("Touristic Spots: %d\n", touristic_spots);

  printf("### Second Card ###\n");
  printf("Enter the state (single character): ");
  scanf(" %c", &state);
  printf("Enter the state code (2 characters): ");
  scanf(" %2s", code);
  printf("Enter the city name: ");
  scanf(" %19s", city);
  printf("Enter the population: ");
  scanf(" %d", &population);
  printf("Enter the area (in square kilometers): ");
  scanf(" %f", &area);
  printf("Enter the GDP (in billions): ");
  scanf(" %f", &gdp);
  printf("Enter the number of touristic spots: ");
  scanf(" %d", &touristic_spots);

  printf("\n--- Card 02 ---\n");
  printf("State: %c\n", state);
  printf("State Code: %s\n", code);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f km²\n", area);
  printf("GDP: %.2f billion\n", gdp);
  printf("Touristic Spots: %d\n", touristic_spots);
  return 0;
}
