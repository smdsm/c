#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void hcf(int m, int n);
void lcd(int m, int n,int x);
int x, Y;
void main()
{
	int a, b;
	printf("��������������:");
	scanf("%d%d", &a, &b);
	hcf(a, b);
	lcd(a, b, x);
	printf("%d �� %d ���Լ��Ϊ%d\n", a, b,x);
	printf("��С������Ϊ:%d\n", Y);
}
void hcf(int m, int n)
{
	int t;
	if (m < n)
	{t = m;m = n;n = t;
	}
	while (n != 0)
	{t = m % n;m = n;n = t;
	}
	x = m;
}
void lcd(int m, int n,int y)
{
	int t;
	t = m * n /y;
	Y = t;
}