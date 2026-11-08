#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: Size of the table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}

			if (result >= 100)
				_putchar('0' + result / 100);

			if (result >= 10)
				_putchar('0' + (result / 10) % 10);

			_putchar('0' + result % 10);
		}
		_putchar('\n');
	}
}
