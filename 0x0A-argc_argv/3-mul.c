#include <stdio.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return:  1 for error
 */
int main(int argc, char *argv[])
{
	int n, m, product;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		product = n * m;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
