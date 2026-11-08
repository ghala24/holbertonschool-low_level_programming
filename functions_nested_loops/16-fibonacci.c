#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long a1, a2, b1, b2, n1, n2;
	unsigned long base;
	int count;

	base = 1000000000UL;
	a1 = 0;
	a2 = 1;
	b1 = 0;
	b2 = 2;

	for (count = 0; count < 98; count++)
	{
		if (a1 == 0)
			printf("%lu", a2);
		else
			printf("%lu%09lu", a1, a2);

		if (count < 97)
			printf(", ");

		n1 = a1 + b1;
		n2 = a2 + b2;

		if (n2 >= base)
		{
			n2 -= base;
			n1++;
		}

		a1 = b1;
		a2 = b2;
		b1 = n1;
		b2 = n2;
	}

	printf("\n");

	return (0);
}
