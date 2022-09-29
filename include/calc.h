/* Filename: calc.h

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

#ifndef CALC_H
#define CALC_H

#define NUMBER '0'

void push(double);
double pop(void);
double peek(void);
void dup(void);
void swap(void);
void cls(void);
int getop(char []);
int getch(void);
void ungetch(int);

#endif  /* CALC_H */
