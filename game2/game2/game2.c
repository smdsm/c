#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

void InitBoard(char board[ROW][COL], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	printf("%d", 0);
	for (i = 1; i < col - 1; i++)
	{
		printf(" %d  ", i);
	}
	printf("\n");
	for (i = 1; i < row-1; i++)
	{
		printf("%d", i);//打印行号
		for (j = 1; j < col-1; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 2)
			{
				printf("|");
			}
		}
		printf("\n ");
		for (j = 1; j < col-1; j++)
		{
			printf("---");
			if (j < col - 2)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}



void SetMine(char mine[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % (row - 2) + 1;
		int y = rand() % (row - 2) + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}

	}
	
}

static int get_mine_count(char mine[ROW][COL], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col)
{
	int x;
	int y;
	int win = 0;
	while (win <(row-2)*(col-2)- EASY_COUNT)
	{
		printf("请输入要排查的坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row - 2 && y >= 0 && y <= row - 2)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你踩到雷了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int n = get_mine_count(mine, x, y);
				show[x][y] = n + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，无法排雷，请重新输入\n");
		}

	}
	if (win == (row - 2) * (col - 2) - EASY_COUNT)
	{
		printf("恭喜，排雷成功\n");
		DisplayBoard(show, row, col);

	}
}
