#include "main.h"
#include <stdio.h>
/**
 * main- prints the name of the program.
 * @argc: argument count
 * @argv: Aergument vector.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
