#include <stdio.h>
int main()
{
	int a[11] = { 9,11,21,31,41,61,71,81,91,101 };
	int x = 0,n = 0;
	scanf("%d", &x);
	for (int i = 0; i < 10; i++)
	{
		if (x >= a[i]) n = i + 1;
	}
	for (int i = 10; i >= n; i--)
	{
		a[i] = a[i - 1];
	}
	a[n] = x;
	for (int i = 0; i < 11; i++)
		printf("%d ", a[i]);
	return 0;
}
