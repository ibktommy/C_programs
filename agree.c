#include <stdio.h>

int main(void) {
  // Declare variable
  char c;

  // Print to screen
  printf("Do you agree to terms and conditions? (y/n)");

  // Get Input
  scanf("%c", &c);

  if (c == 'y' || c == 'Y') {
    printf("Agreed!");
  } else if (c == 'n' || c == 'N') {
    printf("Declined!");
  } else {
    printf("Invalid Input");
  }
}