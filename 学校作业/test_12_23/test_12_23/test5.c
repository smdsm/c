#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void ave(float* p);
void ave1(float* p);
void fail2(float* p);
void good(float* p);
int main()
{
	float a[4][6];
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			scanf("%f", &a[i][j]);
	ave(a);//每个人平均分
	ave1(a);//第一门课平均分
	fail2(a);
	good(a);
	return 0;
}
void ave(float* p)
{
	int i, j;
	float sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
			sum = sum + *(p + i * 6 + j);
		*(p + i * 6 + j) = sum / 5.0;
	}
}
void ave1(float* p)
{
	int i, j;
	float sum = 0;
	for (i = 0; i < 4; i++)
		sum = sum + *(p + i * 6 );
	sum = sum / 4.0;
	printf("第一门课程的平均分是%7.2f\n", sum);
}
void fail2(float* p)
{
	int i, j,n;
	printf("菜\n");
	for (i = 0; i < 4; i++)
	{
		n = 0;
		for (j = 0; j < 5; j++)
			if (*(p + i * 6 + j) < 60.0)n++;
		if (n >= 2) {
			printf("%d  ", i + 1);
			for (j = 0; j < 6; j++)
				printf("%7.2f ", *(p + i * 6 + j));
			printf("\n");
		}
	}
}
void good(float* p)
{
	int i, j,t=1;
	printf("牛逼\n");
	for (i = 0; i < 4; i++)
	{
		if (*(p + i * 6 + 5) > 90) {
			printf("%d  ", i + 1);
			for (j = 0; j < 5; j++)
				printf("%7.2f ", *(p + i * 6 + j));
			printf("\n");
			continue;
		}
		for (j = 0; j < 5; j++){
			if (*(p + i * 6 + j) < 85)t = 0;
		}
		if (t == 1) {
			printf("%d  ", i + 1);
			for (j = 0; j < 5; j++)
				printf("%7.2f ", *(p + i * 6 + j));
			printf("\n");
		}
	}
}


