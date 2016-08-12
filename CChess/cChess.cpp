#include "stdio.h"
#include "definitions.h"


int main()
{
	AllInit();

	CHESS_BOARD board[1];
	MOVELIST list[1];

	ParseFen(START_FEN, board);
	GenerateAllMoves(board, list);
	PrintBoard(board);

	int moveNum = 0;
	int move = 0;
	PrintBoard(board);
	getchar();

	for (moveNum = 0; moveNum < list->count; ++moveNum)
	{
		move = list->moves[moveNum].move;
		if (!MakeMove(board,move))
			continue;
		PrintBoard(board);
		TakeMove(board);
		printf("\nMADE: %s\n", PrMove(move));
		PrintBoard(board);
		getchar();
	}

	printf("\n\nDone!");
	getchar();
	getchar();
	return 0;
}