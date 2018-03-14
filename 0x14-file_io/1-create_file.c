#include "holberton.h"
/**
 * create_file - a function that creates a file
 *
 * @filename: name of file
 *
 * @text_content: contents of file
 * Return: 1 if it works -1 if not
 */

int create_file(const char *filename, char *text_content)
{

	int i;
	int j;

	if (filename == NULL)
	{
		return (-1);
	}


	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

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
