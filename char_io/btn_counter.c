#include <stdio.h>

/*count blanks, tabs and newlines in input*/

int main() {
  int c, nl, t, b;

  nl = 0;
  t = 0;
  b = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++t;
    if (c == ' ')
      ++b;
  }
  printf("Newlines: %d\n", nl);
  printf("Tabs: %d\n", t);
  printf("Blanks: %d\n", b);
}
