#include main.h

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array.
 *
 * Description: This function prints the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
