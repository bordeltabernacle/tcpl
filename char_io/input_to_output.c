#include <stdio.h>

/*copy input to output; 1st version*/

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    printf("\nchar: %d\n", c);
    printf("\nputchar: %d\n", putchar(c));
    printf("expression: %d\n", (getchar() != EOF));
    c = getchar();
  }
  printf("\nexpression: %d\n", (getchar() != EOF));
  printf("EOF: %d\n", EOF);
}
