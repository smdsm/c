#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void sort(char a[]);
int mian()
{
	char a[10];
	gets(a);
	int l = strlen(a);
	if (l > 0)
	{
		printf("字符串过长，请重新输入");
		gets(a);
	}
	sort(a);
	puts(a);
	return 0;
}
void sort(char a[])
{
	int i, j;
	for (i = 0; i < 10 ; i++)
	{
		for (j = i; j < 10-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				char t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
		}
	}
}
