#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//�������Ӵ�С�������
//  {
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//;
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 > num2 && num1 > num3)
//	{
//		printf("%d ", num1);
//		if (num2 > num3)
//			printf("%d %d", num2, num3);
//		else
//			printf("%d %d", num3, num2);
//
//	}
//	else if (num2 > num1 && num2 > num3)
//	{
//		printf("%d ", num2);
//		if (num1 > num3)
//			printf("%d %d", num1 , num3);
//		else
//			printf("%d %d ", num3 , num1);
//	}
//	else
//	{
//		printf("%d ", num3);
//		if (num1 > num2)
//			printf("%d %d", num1 , num2);
//		else
//			printf("%d %d ", num2 , num1);
//
//	}
//	return 0;
//}
//int main()//1---100֮��3�ı���
//{
//	int i = 1;
//	while (i  <= 100)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()//�����Լ��
//{
//	int num1 = 0;
//	int num2 = 0;
//	int temp = 0;
//	int i = 0;
//	scanf("%d %d", &num1, &num2);
//	if (num1 < num2)
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	i = num2;
//	while (i > 0)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//		i--;
//	}
//	return 0;
//}
//int main()//1000 ---2000֮�������
//{
//	int year = 1000;
//	while (year <= 2000)
//	{
//		if (0 == year % 400 || (0 == year % 4 && year % 100 != 0))
//			printf("%d\t", year);
//
//		year += 4;
//
//	}
//
//	return 0;
//
//}
int main()//��100---200�������
{
	int i = 101;
	int j = 2;
	int temp = 1;
	while (i <= 200)
	{
		temp = 1;
		j = 2;
		while (j <= i / 2)
		{
			if ( i % j == 0)
			{
				temp = 0;
				break;
			}
			j++;
		}
		if (temp == 1)
		{
			printf("%d  ", i);
		}
		i += 2;
	}
	return 0;
}