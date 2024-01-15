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
  float sum = (float) num1 / (float) num2;

  // Print SUM
  printf("%.2f", sum);
}