#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

void game1()
{
	char board[ROW][COL];
	char mine[ROW][COL];
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);

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
	do
	{
		menu();
		printf("��ѡ���Ƿ�ʼ��Ϸ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game1();
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
}