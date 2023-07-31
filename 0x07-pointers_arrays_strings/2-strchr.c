/**
 * _strchr - locates a character in a string.
 * @c: the character to locate.
 * @s: the string in which to locate a character.
 * Return: a pointer to the first occurrence of the character c or,
 *         NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
		s++;
	} while (*(s - 1));

	return (0);
}
