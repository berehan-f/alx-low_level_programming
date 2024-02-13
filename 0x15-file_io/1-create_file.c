#include "main.h"

/**
 * create_file - creates a file and writed content on it.
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 if file creation and writing fails e.t.c.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, str_len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len]; str_len++)
			;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, str_len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
