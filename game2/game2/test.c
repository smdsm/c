#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

void game1()
{
	char show[ROW][COL] = {0};//存放排查出的雷的信息
	char mine[ROW][COL] = {0};//存放布置好的雷的信息
	InitBoard(show, ROW, COL,'*');
	InitBoard(mine, ROW, COL,'0');
	//布置雷盘
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//打印雷盘
	DisplayBoard(show, ROW, COL);
	//排雷
	FindMine(mine,show,ROW,COL);
}

void menu()
{
	printf("**********************\n");
	printf("******  1. play  *****\n");
	printf("******  0. exit  *****\n");
	printf("**********************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择是否开始游戏：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			printf("开始游戏\n");
			game1();
			break;
		default:
			printf("输入错误，请重新选择：\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
}