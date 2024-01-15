#include <stdio.h>

int main(void)
{
  // Declare variables
  int num1, num2;

  // Get values
  printf("Input first number: ");
  scanf("%i", &num1);

  printf("Input second number: ");
  scanf("%i", &num2);

  // Initialize SUM and TYPE CASTING
  double sum = (double) num1 / (double) num2;

  // Print SUM
  printf("%.3f", sum);
}