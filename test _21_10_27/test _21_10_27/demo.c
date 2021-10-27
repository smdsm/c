#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int cunt = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = i / 10;
//		b = i % 10;
//		if (a == 9)
//			cunt++;
//		if (b == 9)
//			cunt++;
//	}
//	printf("9的个数是%d",cunt);
//	return 0;
//}
//int main()
//{
//	double fenzi = 1.0;
//	int fenmu = 1;
//	int flag = 1;
//	double sum = 0.0;
//
//	for (fenmu = 1; fenmu <= 100; fenmu++)
//	{
//		sum = sum +flag * fenzi / fenmu;
//		flag = -flag;
//	}
//	printf("最终值为%f\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int max = 0;
//	int i = 10;
//	for(i = 0 ; i < 10 ; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	max = arr[0];
//	for (i = 1 ; i < 10 ; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			printf("%d * %d\t", i, j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 1,3,5,6,8,34,67,89,90,97 };
	int left = 0;
	int right = sizeof(arr)/sizeof (arr[0]) - 1;
	int mid = 0;
	int n = 0;
	scanf("%d", &n);

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == n)
		{
			printf("找到了，下标是%d", mid);
			break;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	if (left > right)
	{
		printf("找不到！");

	}
	return 0;
}