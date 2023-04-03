#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[8])
{ int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)	
			_putchar(a[i][j]);
		_putchar('\n');
	}
} int main(void)
{
	char board[8][8] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
	};

	print_chessboard(board);

	return (0);
}
