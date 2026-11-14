# Simple Calculator

A terminal-based calculator written in C.

## Features
- Addition
- Subtraction
- Multiplication
- Division
- Division by zero protection
- Menu loop and choice validation

## Number Format
The calculator uses double-precision floating-point numbers.
All four operations support decimal values.
Results are displayed using %g, removing unnecessary trailing zeros.

Examples:
- 7 * 6 = 42
- 10 / 4 = 2.5
- 10 / 0 = Error: division by zero

## Compilation
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 calculator.c -o calculator

## Execution
./calculator
