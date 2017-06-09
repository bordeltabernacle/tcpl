#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define LONGLINE 80

int fetchline(char line[], int maxline);

/* print longest input line */
int main() {
  int len;	    /* current line length */
  char line[MAXLINE]; /* current input line */

  while ((len = fetchline(line, MAXLINE)) > 0) {
    if (len > LONGLINE) {
      printf("%s", line);
    }
  }
  return 0;
}

/* fetchline: read a line into s, return length */
int fetchline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
