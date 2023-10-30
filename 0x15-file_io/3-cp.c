#include "main.h"

/**
 * main - creates new file
 * Return: success
 */
int main(void)
{
	char c;
	FILE *file_1, *file_2;

	file_1 = fopen("file_from", "r");
	file_2 = fopen("file_to", "w");

	if (file_1 == NULL || file_2 == NULL)
	{
	return (-1);
	}

	while ((c = fgetc(file_1)) != EOF)
	fputc(c, file_2);

	fclose(file_1);
	fclose(file_2);

	return (1);
}
