#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */

int fetchline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	while ((len = fetchline(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
	return 0;
}

/* fetchline: read a line into s, return length */
int fetchline(char s[], int lim)
{
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
