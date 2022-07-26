#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	int n = 0;
	int a[50][50] = { 1 };
	printf("输入要打印的行数（小于50）：");
	scanf("%d", &n);
	while (n>50 || n <=0)
	{
		printf("输入数据过大或过小，请重新输入要打印的行数：");
		scanf("%d", &n);
	}
	for (int i = 1; i < n; i++)
	{
		a[i][0] = 1;
		for (int j = 1; j < i+1; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d ", a[i][j]);
		}
			printf("\n");
	}
	return 0;
}

int main()
{
	char muder = 0;
	for (muder = 'A'; muder <= 'D'; muder++)
	{
		if (3 == ('A' != muder) + ('C' == muder) + ('D' == muder) + ('D' != muder))
		{
			printf("muder is %c", muder);
		}
	}
	return 0;
}


#include<stdio.h>

int main() {
	int A, B, C, D, E;
	for (A = 0; A <= 5; A++) {
		for (B = 0; B <= 5; B++) {
			for (C = 0; C <= 5; C++) {
				for (D = 0; D <= 5; D++) {
					for (E = 0; E <= 5; E++) {
						if ((B == 2) + (A == 3) == 1 &&
							(B == 2) + (E == 4) == 1 &&
							(C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 &&
							(E == 4) + (A == 1) == 1) {
							if (A * B * C * D * E == 120) {
								printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
