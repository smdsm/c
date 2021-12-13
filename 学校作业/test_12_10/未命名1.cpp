#include<stdio.h>
#include <math.h>
int main()
{
	int x = 0, f = 0;
	scanf("%d", &x);
	f = is_prime(x);
	if (f == 0)  printf("不是素数\n");
	else printf("是素数");
	return 0;
}
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
