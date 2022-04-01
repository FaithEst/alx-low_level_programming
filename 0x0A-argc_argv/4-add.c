#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return:  1 for error
 */
int main(int argc, char *argv[])
{
    int sum, i, num;
	char *p;

	sum = 0;

	if (argc > 1)
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}

	printf("%d\n", sum);
	return (0);
}
