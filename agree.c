#include <stdio.h>

int main(void) {
  // Declare variable
  char c;

  // Print to screen
  printf("Do you agree to terms and conditions? (y/n)");

  // Get Input
  scanf("%c", &c);

  if (c == 'y') {
    printf("Agreed!");
  } else if (c == 'n') {
    printf("Declined!");
  } else {
    printf("Invalid Input");
  }
}