#include <stdio.h>

int main(void) {
  // Declare Variables
  int num1, num2;

  // Accept variable-values from user
  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("First number is greater than the second number\n");
  } else if (num1 < num2) {
    printf("First number is less than second number\n");
  } else {
    printf("The numbers are equal!");
  }

  return 0;
}