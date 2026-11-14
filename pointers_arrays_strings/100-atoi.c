#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer or 0 if no digits
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;
	int limit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	limit = INT_MIN / 10;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result < limit ||
		    (result == limit && -digit < INT_MIN % 10))
			return (sign == -1 ? INT_MIN : INT_MAX);

		result = result * 10 - digit;
		i++;
	}

	if (sign == 1)
	{
		if (result < -INT_MAX)
			return (INT_MAX);
		return (-result);
	}

	return (result);
}
