#include "main.h"

/**
 * prime_helper - checks divisibility recursively
 * @n: number to check
 * @i: candidate divisor
 * Return: 1 if prime, otherwise 0
 */
int prime_helper(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks whether a number is prime
 * @n: number to check
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_helper(n, 2));
}
