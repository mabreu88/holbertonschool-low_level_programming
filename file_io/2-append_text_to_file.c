#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename: The filename
 *@text_content: Text to add
 *Return: 1 on success and -1 on failure, If filename is NULL return -1
 *If text_content is NULL, do not add anything to the file. Return 1 if the
 *file exists and -1 if the file does not exist or if you do not have the
 *required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}
	while (*(text_content + len))
		len++;
	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
