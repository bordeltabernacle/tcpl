#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
int fetchline(char line[], int maxline);
void reverse(char s[]);

/* reverse input lines a line at a time */
int main() {
  char line[MAXLINE]; /* current input line */

  while (fetchline(line, MAXLINE) > 0) {
    reverse(line);
    printf("%s\n", line);
  }
}

/* reverse: reverse string */
void reverse(char s[]) {
  int i, j;
  char temp;

  i = 0;
  while (s[i] != '\0') { /* find end of the string s */
    ++i;
  }
  --i; /* back off from '\0' */
  if (s[i] == '\n') {
    --i;
  }
  j = 0;
  while (j < i) {
    temp = s[j];
    s[j] = s[i]; /* swap the characters */
    s[i] = temp;
    --i;
    ++j;
  }
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
