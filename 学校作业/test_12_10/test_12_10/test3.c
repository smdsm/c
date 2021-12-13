#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void ave(double s[][5],double a[]);
void ave1(double s[][5], double a[]);
void Max(double s[][5], double* m,int* mi);
//int main()
//{
//	double score[10][5],aver[10],aver1[5],max = 0;
//	int maxi = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%lf", &score[i][j]);
//		}
//	}
//	ave(score,aver);
//	ave1(score, aver1);
//	Max(score, &max,&maxi);
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%.2f ", score[i][j]);
//		}
//		printf("%.2f ", aver[i]);
//		printf("\n");
//	}
//	for (int i = 0; i < 5; i++)
//		printf("%.2f ", aver1[i]);
//	printf("\n");
//	maxi += 1;
//	printf("最大值是%.2f,课程是科目%d", max, maxi);
//	return 0;
//}
void ave(double s[][5],double a[])
{
	for(int i =0;i <10;i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum = sum + s[i][j];
		}
		a[i] = sum / 5.0;
	}
}
void ave1(double s[][5], double a[])
{
	for(int i =0;i < 5;i++)
	{
		int sum = 0;
		for (int j = 0; j < 10; j++)
		{
			sum =sum + s[j][i];
		}
		a[i] = sum / 10.0;
	}
}
void Max(double s[][5], double* m, int* mi)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (s[i][j] > *m)
			{	*m = s[i][j];
				*mi = j;}
		}
	}
}


