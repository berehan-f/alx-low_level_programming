/**
 * _strlen_recursion - calculates the length of the string pointed to by s.
 * @s: the string length in question.
 * Return: the number of bytes in the string pointed to by s.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
