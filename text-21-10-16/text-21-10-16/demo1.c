#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��1��+2��+ ������+n!

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	int arr = 1;
//	scanf("%d", &n);
//	do
//	{
//		arr *= i;
//		i += 1;
//		sum += arr;
//
//	} 
//	while (i <= n);
//
//	printf("%d", sum);
//
//	return 0;
//
//}


//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//
//	char arr1[] = "Welcome to bit!!!";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("����ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�������,����������:");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������󣬳����˳�");
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <time.h>

void menu()
{
	printf("##########################################\n");
	printf("##########################################\n");
	printf("############   1. play    ################\n");
	printf("############   2. exit    ################\n");
	printf("##########################################\n");
	printf("##########################################\n");
}


void game()
{
	int guess = 0;
	//��������Ϸ��ʵ��
	//�����������
	//rand����������һ��0--32767֮������֣���������ֲ�̫���
	//ʱ��һֱ�ڱ仯---ʱ���
	int ret = rand()%100+1;
	while(1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if(guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));


	do
	{
		menu();//�ȴ�ӡһ���˵�
		printf("��ѡ��");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;

}