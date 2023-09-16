#include "3-calc.h"
/**
 * main - main program
 * @argc: number of command line argumants
 * @argv: array containing arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int results;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
		if (!op)
		{
			printf("Error\n");
			exit(99);
		}
		if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		results = op(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", results);
		return (0);
}





