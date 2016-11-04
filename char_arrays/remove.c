#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */

int fetchline(char line[], int maxline);
int rm(char s[]);

/* rm trailing blanks and tabs, and delete blank lines */
int main()
{
	char line[MAXLINE];	/* current input line */

	while (fetchline(line, MAXLINE) > 0) {
		if (rm(line) > 0) {
			printf("%s\n", line);
		}
	}
	return 0;
}

/* rm trailing blanks and tans from character string s */
int rm(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\n') {	/* find newline character */
		++i;
	}
	--i;			/* back off from '\n' */
	while (i > 0 && (s[i] == ' ' || s[i] == '\t')) {
		--i;
	}
	if (i >= 0) {		/* is it a nonblank line? */
		++i;
		s[i] = '\n';	/* put newline character back */
		++i;
		s[i] = '\0';	/* terminate the string */
	}
	return i;
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
