/**
 * _memcpy - copies a memory area.
 * @n: the number of bytes of memory area to copy.
 * @src: the source of memory area to copy from.
 * @dest: the destination to which to copy memory area.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
