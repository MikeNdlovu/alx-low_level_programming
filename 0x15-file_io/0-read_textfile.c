#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it out
 * @filename: name of file
 * @letters: number of letters being printed
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_ptr;
	ssize_t wr, rd;
	char *ch;

	f_ptr = open(filename, O_RDONLY);

	if (filename == NULL)
	return (0);

	if (f_ptr == -1)
	return (0);

	ch = malloc(sizeof(char) * letters);

	if (ch == NULL)
	{
		close(f_ptr);
		return (0);
	}

	rd = read(f_ptr, ch, letters);
	close(f_ptr);

	wr = write(STDOUT_FILENO, ch, rd);
	free(ch);

	return (wr);
}
