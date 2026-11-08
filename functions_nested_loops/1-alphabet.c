#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
