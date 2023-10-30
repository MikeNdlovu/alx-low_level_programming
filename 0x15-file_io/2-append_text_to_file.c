#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content appended to file
 * Return: 1(success) -1(fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_ptr, i, rw;

	if (!filename)
	return (-1);

	file_ptr = open(filename, O_WRONLY | O_APPEND);

	if (file_ptr == -1)
	return (-1);

	if (text_content)
	{
	for (i = 0; text_content[i]; i++)
	i++;

	rw = write(file_ptr, text_content, i);

	if (rw == -1)
	return (-1);
	}
	close(file_ptr);

	return (1);
}
