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

	ssize_t i, k;
	char buff[1024];


	if (filename == NULL)
		return (0);



	i = open(filename, O_RDONLY | O_CREAT, S_IRUSR);
		if (i == -1)
			return (0);


	k = read(i, buff, letters);
	if (k == -1)
		return (0);

	buff[k] = '\0';

	write(STDOUT_FILENO, buff, k);
       

	close(i);

	return (k);

}
