#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the program received two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the input arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform the multiplication */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
