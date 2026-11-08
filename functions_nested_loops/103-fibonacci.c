#include <stdio.h>

/**
 * main - Sums even Fibonacci terms up to four million
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first, second, next, sum;

	first = 1;
	second = 2;
	sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
			sum += first;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);

	return (0);
}
