#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
void begin()//��ʼ��ģ��
{
	printf("################################\n");
	printf("################################\n");
	printf("#########1.  play    ###########\n");
	printf("#########0.  exit    ###########\n");
	printf("################################\n");
	printf("################################\n");
}


play()//��Ϸ��ʽģ��
{
	int guess = 0;//�²���
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("��Ϸ��ʼ�����");
	while (1)
	{
		
		scanf("%d", &guess);
		//��rand���������
		
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ���¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int choice = 0;   //choice�洢�������
	//��ʼ��ģ�飬����˵�
	do
	{
	begin();

	//����������ֵ���ж�ִ��play����exit
	scanf("%d",&choice);
	switch (choice)
	{
	case 1:
		play();
		break;
	case 0:
		printf("�˳���Ϸ");
		break;
	default:
		printf("����������������룡");
		break;
	}
	}while (choice);




	return 0;

}
