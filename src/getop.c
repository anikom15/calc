/* Filename: getop.c

   Copyright 2022 W. M. Martinez

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */ 

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
