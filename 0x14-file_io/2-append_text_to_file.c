#include "holberton.h"
/**
 * append_text_to_file - appends at end of file
 *
 * @filename: filename
 *
 * @text_content: text content
 * Return: 1 if works, -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int j;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	j = write(i, text_content, _strlen(text_content));
	if (j == -1)
		return (-1);

	close(i);
	return (1);
}

/**
 * _strlen - helper function for length
 *
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	int i = 0;


	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
