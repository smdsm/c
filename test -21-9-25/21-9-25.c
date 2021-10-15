#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d  ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s = i * s;
//	}
//	printf("n! 是 %d", s);
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <=10; i++)
//	{
//		ret = 1;                      //优化：
//		for (j = 1; j <= i; j++)      //ret *= i;
//		{                             // sum += ret;
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("阶乘的和是 %d", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <=10; i++)
//	{    
//		ret *= i;
//		sum += ret;
//	}
//	printf("阶乘的和是 %d", sum);
//	return 0;
//}
int a[] = { 10,20,30,40,50,60,70,80,90,100 };
int main()
{
	int x = 0;
	int i = 0;
	int j = 9;
	int m = 0;
	scanf("%d", &x);
	while (i <= j)
	{
		m = (i + j) / 2;
		if (x == a[m])
		{
			printf("找到了下标为%d\n", m);
			break;
		}
		else if (x < a[m])
			j = m - 1;
		else
			i = m + 1;
	}
	if (i > j)
		printf("未找到\n");
	
}