# calc
Reverse Polish notation (RPN) Calculator primarily based on the
functionality described in 'The C Programming Language' by Kernighan
and Ritchie.

## Introduction to Reverse Polish Notation
Reverse Polish notation (RPN) is a mathematical expression format
primarily used in Hewlett-Packard calculators.  It is also used in some
programming languages, like Forth and PostScript.  RPN is distinguished
from 'algebraic' notation (AN), where most operators are written
between the operands.  The following presents the mathematical
evaluations available for this calculator:

* Addition: $3 + 4 = 7$
* Subtraction: $-5 - 7 = -12$
* Multiplication: $2 \times 3.14 = 6.28$
* Division: $9 \div -1.5 = -6$
* Modulo operation: $2 \mod 4 = 2$

In RPN (thus how these expressions should be entered in this
calculator), the above expressions appear like so:

* Addition: `3 4 +`
* Subtraction: `-5 7 -`
* Multiplication: `2 3.14 *`
* Division: `9 -1.5 /`
* Modulo operation: `2 4 %`

Note that for non-communative operations, the order of the operands is
processed identically in RPN as in AN.  That is, only the *operator*
changes place.  The order of operands should be the same.

## Usage

Entries are read from standard input.  Multiple RPN expressions can be
expressed on a single line.  For example, the entry `5 7 + 9 8 + *`
will evaluate to 204.

### Stack Operations

A carriage return (↵) will display the evaluated expression.  This
does not remove the value from the stack.

The following stack operations are supported:

* `C` - Clear the stack
* `D` - Duplicate the topmost value
* `S` - Swap the top two values on the stack

## Bugs

Bugs can be reported to [W. M. Martinez](mailto:anikom15@outlook.com).

## Notice
Copyright 2022 W. M. Martinez

Copying and distribution of this file, with or without modification,
are permitted in any medium without royalty provided the copyright
notice and this notice are preserved.  This file is offered as-is,
without any warranty.
