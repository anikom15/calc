/* Filename: stack.c

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

#define MAXVAL 100  /* maximum depth of val stack */

int sp = 0;          /* next free stack position */
double val[MAXVAL];  /* value stack */

/* push:  push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/* pop:  pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* peek:  return the top value from the stack without popping it */
double peek(void)
{
	if (sp > 0)
		return val[sp - 1];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* dup:  duplicate the top value of the stack and push it */
void dup(void)
{
	push(peek());
}

/* swap:  swap the top two elements of the stack */
void swap(void)
{
	double x = pop();
	double y = pop();

	push(x);
	push(y);
}

/* cls:  clear the stack */
void cls(void)
{
	sp = 0;
}
