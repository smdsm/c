#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求1！+2！+ ………+n!

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
//	printf("请输入密码：");
//
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登入成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,请重新输入:");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，程序退出");
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
	//猜数字游戏的实现
	//先生成随机数
	//rand函数返回了一个0--32767之间的数字，但这个数字不太随机
	//时间一直在变化---时间戳
	int ret = rand()%100+1;
	while(1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		menu();//先打印一个菜单
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择：\n");
			break;
		}
	} while (input);

	return 0;

}