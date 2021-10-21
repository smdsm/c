#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int MAX(int x, int y)
{
	int max = 0;
	max = x > y ? x : y;
	return max;
}
int main()
{
	int max = 0;
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	max = MAX(num1, num2);
	printf("%d\n ", max);
	return 0;
