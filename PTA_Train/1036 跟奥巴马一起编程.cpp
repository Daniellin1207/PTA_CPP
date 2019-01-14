#include "pch.h"
#include <cstdio>

int main1036() {
	int row, col;
	char c;
	scanf("%d %c", &col, &c);
	if (col % 2 == 1)row = col / 2 + 1;
	else row = col / 2;

	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}
	printf("\n");

	for (int i = 2; i < row; i++)
	{
		printf("%c", c);
		for (int j = 0; j < col-2; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}

	for (int i = 0; i < col; i++)
	{
		printf("%c", c);
	}
	return 0;
}