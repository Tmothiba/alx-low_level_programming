#include "main.h"
#include <stdlib.h>
/**
 * create_file-  function that creates a file.
 * @filename: filename.
 * @text_content: contents of the file.
 * Return: 1 on success and -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fileD;
	int letters, newer;

	if (!filename)
	{
		return (-1);
	}
	fileD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileD == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = " ";
	}
	for (letters = 0; text_content[letters]; letters++)
	{
		;
	}
	newer = write(fileD, text_content, letters);
	if (newer == -1)
	{
		return (-1);
	}
	close(fileD);
	return (1);
}


