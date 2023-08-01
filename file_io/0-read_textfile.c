#include "main.h"
/**
 *read_textfile - function that reads a text file and prints it to the POSIX
 *standard output
 *@filename: The filename
 *@letters: is the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(tmp);
		return (0);
	}
	fdr = read(fdo, tmp, letters);
	if (fdr < 0)
	{
		free(tmp);
		return (0);
	}
	fdw = write(STDOUT_FILENO,	tmp, fdr);
	free(tmp);
	close(fdo);
	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
