#include "main.h"

/**
 * create_file - Function to create a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to the string to be written to the file.
 *
 * Return: If the function fails, return -1.
 *         Otherwise, return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

