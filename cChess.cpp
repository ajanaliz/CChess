#include "stdio.h"
#include "definitions.h"



int main()
{
	allInit();

	U64 playBitBoard = 0ULL;

	PrintBitBoard(playBitBoard);

	printf("%d", CNT(playBitBoard));

	getchar();
	getchar();
	getchar();
	return 0;
}