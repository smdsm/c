#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


int sushu(int n)
{
	int a = 0;
	for (a = 2; a <= sqrt(n); a++)
	{
		if (n % a == 0)
		{
			return 0;
		}
		
	}
	return 1;
}



//int main()
//{
//	int i = 101;
//
//	for (i = 101 ;i <= 200 ;i += 2)
//	{
//		int s = sushu(i);
//		if (s == 1)
//		{
//			printf("%d ",i );
//		}
//	}
//	return 0;
//}

int is_leap_year(int y)
{
	if (y % 100 != 0 || y % 400 == 0)
	{
		return 1;
	}
	return 0;
}

//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year += 4)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}

void change(int *pa ,int *pb)
{
	int z;
	z = *pa;
	*pa = *pb;
	*pb = z;

}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	change(&a, &b);
//	printf("½»»»ºó£ºa = %d  b = %d ", a, b);
//
//
//	return 0;
//}

void daYingChenFaKoJueBiao(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			printf("%d * %d  ", i, j);
		}
		printf("\n");
	}
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	daYingChenFaKoJueBiao(a);
	return 0;
}
