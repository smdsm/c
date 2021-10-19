#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
void begin()//初始化模块
{
	printf("################################\n");
	printf("################################\n");
	printf("#########1.  play    ###########\n");
	printf("#########0.  exit    ###########\n");
	printf("################################\n");
	printf("################################\n");
}


play()//游戏正式模块
{
	int guess = 0;//猜测数
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("游戏开始请猜数");
	while (1)
	{
		
		scanf("%d", &guess);
		//用rand产生随机数
		
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜，猜对了\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int choice = 0;   //choice存储输入的数
	//初始化模块，输出菜单
	do
	{
	begin();

	//接收输入数值，判断执行play还是exit
	scanf("%d",&choice);
	switch (choice)
	{
	case 1:
		play();
		break;
	case 0:
		printf("退出游戏");
		break;
	default:
		printf("输入错误，请重新输入！");
		break;
	}
	}while (choice);




	return 0;

}
