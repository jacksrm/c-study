#include <stdio.h>

int main(int argc, char const *argv[])
{
  char productA[30] = "Product A";
  char productB[30] = "Product B";

  unsigned stockA = 1000;
  unsigned stockB = 2000;

  float valueA = 10.50;
  float valueB = 20.40;

  unsigned minStockA = 500;
  unsigned minStockB = 2500;

  double totalValueA;
  double totalValueB;

  int resultA, resultB;

  // Displaying product information
  printf("Product %s has %u units in stock, each valued at R$ %.2f\n", productA, stockA, valueA);
  printf("Product %s has %u units in stock, each valued at R$ %.2f\n", productB, stockB, valueB);

  // Comparing stock levels
  resultA = stockA > minStockA;
  resultB = stockB > minStockB;

  printf("The product %s has stock above the minimum required: %d\n", productA, resultA);
  printf("The product %s has stock above the minimum required: %d\n", productB, resultB);

  // Comparing total values
  totalValueA = stockA * valueA;
  totalValueB = stockB * valueB;

  printf("The total value of A (R$ %.2f) is greater than B (R$ %.2f): %d\n", totalValueA, totalValueB, totalValueA > totalValueB);

  return 0;
}
