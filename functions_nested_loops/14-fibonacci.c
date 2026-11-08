#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first, second, next;
	int count;

	first = 1;
	second = 2;

	for (count = 0; count < 50; count++)
	{
		printf("%lu", first);

		if (count < 49)
			printf(", ");

		next = first + second;
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
