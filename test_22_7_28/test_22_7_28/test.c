#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int left_judge(char a[], char b[], int len)
{
	int i = 0;
	int j = 0;
	char temp = 0;

	for (i = 0; i < len; i++)
	{
		temp = a[0];
		for (j = 1; j < len; j++)
		{
			a[j - 1] = a[j];
		}
		a[j-1] = temp;
		if (strcmp(a, b) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int right_judge(char a[], char b[], int len)
{
	int i = 0;
	int j = 0;
	char temp = 0;

	for (i = 0; i < len; i++)
	{
		temp = a[len-1];
		for (j = len-2; j>=0; j--)
		{
			a[j + 1] = a[j];
		}
		a[0] = temp;
		if (strcmp(a, b) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char a[10] = { 0 };
	char b[10] = { 0 };
	char c[10] = { 0 };
	int len = 0;
	int cmp = 0;

	printf("请输入原始字符串：\n");
	scanf("%s", &a);
	printf("请输入变化后的字符串：\n");
	scanf("%s", &b);
	strcpy(c, a);
	if (strlen(a) == strlen(b))
	{
		len = strlen(a);
		cmp = left_judge(a,b,len);
		cmp = right_judge(a,b,len);
		if (cmp == 1)
		{
			printf("%s是%s旋转成的字符串\n", c, b);

		}
		else
		{
			printf("%s不是%s旋转成的字符串\n", c, b);
		}

	}
	else
	{
		printf("%s不是%s旋转成的字符串\n", c, b);
	}
	return 0;
}


//一个简易计算器（转移表的运用）

#include <stdio.h>

void menu()
{
	printf("***********************\n");
	printf("**** 1.add   2.sub ****\n");
	printf("**** 3.mul   4.div ****\n");
	printf("**** 0.exit        ****\n");
	printf("***********************\n");
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

int main()
{
	int x = 0, y = 0;
	int input = 0;;

	int (*pfArr[5])(int, int) = { 0,add,sub,mul,div };

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出！\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：");
			scanf("%d %d", &x, &y);
			printf("%d\n",pfArr[input](x, y));
		}
		else
		{
			printf("选择错误！\n");
		}
	} while (input);

	return 0;
}