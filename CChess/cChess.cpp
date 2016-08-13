#include "stdio.h"
#include "definitions.h"


int main()
{
	AllInit();

	CHESS_BOARD board[1];
	MOVELIST list[1];

	ParseFen(START_FEN, board);
	PerftTest(7, board);

	printf("\n\nDone!");
	getchar();
	getchar();
	return 0;
}