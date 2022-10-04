/* Filename: main.c

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

#include <stdio.h>
#include <stdlib.h>  /* for atof() */

#define MAXOP  100  /* max size of operand or operator */
#define NUMBER '0'  /* signal that a number was found */

/* reverse Polish calculator */
int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;

		/* stack operations */
		case 'd': case 'D':
       			dup();
       			break;
		case 'p': case 'P':
			printf("\t%.8g\n", peek());
			break;
		case 's': case 'S':
       			swap();
       			break;
		case 'c': case 'C':
       			cls();
       			break;

		/* arithmetic */
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '%':
			op2 = pop();
			if ((int) op2 != 0)
				push((int) pop() % (int) op2);
			else
				printf("error: zero divisor\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
		}
	}
	return 0;
}
