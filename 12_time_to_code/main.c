#include <stdio.h>

int main(int argc, char const *argv[])
{
  float temperature, humidity;
  unsigned stock;

  printf("Enter the temperature: ");
  scanf("%f", &temperature);
  printf("Enter the humidity: ");
  scanf("%f", &humidity);
  printf("Enter the stock: ");
  scanf("%u", &stock);

  if (temperature > 30)
    printf("Temperature is too high\n");
  else
    printf("Temperature is normal\n");

  if (humidity > 50)
    printf("Humidity is too high\n");
  else
    printf("Humidity is normal\n");

  if (stock < 1000)
    printf("Stock is low\n");
  else
    printf("Stock is sufficient\n");

  return 0;
}
