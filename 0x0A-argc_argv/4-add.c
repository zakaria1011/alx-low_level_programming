#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* If no number is passed to the program */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Add the positive numbers */
	for (i = 1; i < argc; i++)
	{
		int j, digitCount = 0;

		/* Check if the number contains non-digit symbols */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			digitCount++;
		}

		/* Convert the number to an integer and add to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return (0);
}
