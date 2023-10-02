#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letter: number of letters to be printed
 * Return: number fo letters printed and 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileD;
	ssize_t nrd, newer;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
	{
		return (0);
	}

	buf = (char *)malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}
	nrd = read(fileD, buf, letters);

	newer = write(STDOUT_FILENO, buf, nrd);
	 
	close(fileD);
	free(buf);
	return (newer);
}


