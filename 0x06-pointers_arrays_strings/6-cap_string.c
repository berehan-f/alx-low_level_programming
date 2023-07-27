#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @c: the string to capitalize.
 * Return: the capitalized string c.
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (!(c[i] >= 'a' && c[i] <= 'z'))
			continue;
		else if (i == 0)
			c[i] -= 32;
		else
		{
			switch (c[i - 1])
			{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case '.':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				c[i] -= 32;
			default:
				break;
			}
		}
	}

	return (c);
}
