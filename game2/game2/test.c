#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

void game1()
{
	char show[ROW][COL] = {0};//����Ų�����׵���Ϣ
	char mine[ROW][COL] = {0};//��Ų��úõ��׵���Ϣ
	InitBoard(show, ROW, COL,'*');
	InitBoard(mine, ROW, COL,'0');
	//��������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//����
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