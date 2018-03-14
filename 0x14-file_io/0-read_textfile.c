#include "holberton.h"
/**
 * read_textfile - a function that reads a text file and prints output
 *
 *
 * @filename: - name of file
 *
 * @letters: - number of letters should read and print
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t k;
	char *buff;
	int i;
	ssize_t j;

	if (filename == NULL)
		return (0);



	i = open(filename, O_RDONLY | O_CREAT, S_IRUSR);
	if (i == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	k = read(i, buff, letters);
	if (k == -1)
		return (0);

	buff[k] = '\0';

	j = write(STDOUT_FILENO, buff, k);
	if (j == -1)
		return (0);
	free(buff);

	close(i);

	return (k);

}
