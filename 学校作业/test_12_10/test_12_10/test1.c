#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int is_prime(int a);
//int main()
//{
//	int x = 0, f = 0;
//	for (x = 101; x < 200; x += 2)
//	{
//		f = is_prime(x);
//		if (f == 1)
//			printf("%d ", x);
//	}
//	return 0;
//}
int is_prime(int a)
{
	if (a < 2)
		return 0;
	if (a == 2 || a == 3)
		return 1;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

