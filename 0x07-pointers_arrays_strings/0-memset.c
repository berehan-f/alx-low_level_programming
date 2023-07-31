/**
 * _memset - fills memory with constant byte.
 * @s: the buffer to be filled.
 * @b: the constant byte with which to fill the buffer.
 * @n: the number of bytes of memory to fil.
 * Return: a pointer to the buffer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
