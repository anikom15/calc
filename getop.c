#include "calc.h"

#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);

/* getop:  get next operator or numeric operand */
int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.' && c != '-')
		return c;  /* not a number */
	i = 0;
	if (c == '-' || isdigit(c))  /* collect integer part */
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')  /* collect fractional part */
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	if (s[0] == '-' && s[1] == '\0')
		return '-';
	return NUMBER;
} 
