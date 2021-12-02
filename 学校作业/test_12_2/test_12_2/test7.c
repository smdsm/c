#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int e = 0, f = 0, s = 0, num = 0, c = 0;
//	char a[3][80] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		gets(a[i]);
//		for (int j = 0; j < 80 && a[i][j] != '\0'; j++)
//		{
//			if (a[i][j] == ' ') s++;
//			else if (a[i][j] >= 'a' && a[i][j] <= 'z') e++;
//			else if (a[i][j] >= 'A' && a[i][j] <= 'Z') f++;
//			else if (a[i][j] >= '0' && a[i][j] <= '9') num++;
//			else c++;
//		}
//	}
//	printf("小写字母个数是       %d\n", e);
//	printf("大写字母个数是       %d\n", f);
//	printf("空格个数是           %d\n", s);
//	printf("数字个数是           %d\n", num);
//	printf("其他字符个数是       %d\n", c);
//
//	return 0;
//}