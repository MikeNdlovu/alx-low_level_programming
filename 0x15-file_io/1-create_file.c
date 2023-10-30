#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content written in the file
 * Return: 1(success) -1(fail)
 */
int create_file(const char *filename, char *text_content)
{
	int file_ptr;
	int i, rw;

	if (!filename)
	return (-1);

	file_ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_ptr == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (i = 0; text_content[i]; i++)
	i++;

	rw = write(file_ptr, text_content, i);

	if (rw == -1)
	return (-1);

	close(file_ptr);
	return (1);
}
