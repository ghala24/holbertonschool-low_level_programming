#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0, capitalize = 1;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		capitalize = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}
		i++;
	}

	return (str);
}
