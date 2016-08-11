#include "stdio.h"
#include "definitions.h"


int main()
{
	AllInit();

	U64 playBitBoard = 0ULL;
	CHESS_BOARD board[1];
	MOVELIST list[1];
	printf("%d", CNT(playBitBoard));

	ParseFen(START_FEN, board);
	PrintBoard(board);

	ASSERT(CheckBoard(board));

	GenerateAllMoves(board, list);
	PrintMoveList(list);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	return 0;
}