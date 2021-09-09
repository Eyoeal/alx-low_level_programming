#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: address to the string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && (str[i + 1] >= 'a'
					     && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
