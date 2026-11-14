#include "main.h"

/**
 * sqrt_helper - finds the natural square root recursively
 * @n: number
 * @i: candidate root
 * Return: square root or -1
 */
int sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);
	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (sqrt_helper(n, 1));
}
