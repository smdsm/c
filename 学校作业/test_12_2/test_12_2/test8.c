#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[4][5] = { 9, 81, 205, 40, 50,90, - 60, 96 ,1 ,3,210 ,- 3, 101 ,89 ,90,21 ,22 ,230, 23 ,34 };
	int i, j,max,min,maxi,maxj,flag = 0;
	/*for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}*/
	for (i = 0; i < 4; i++)
	{
		max = a[i][0];
		for (j = 1; j < 5; j++)
		{
			if (max < a[i][j]) {max = a[i][j];maxi = i; maxj = j;}
		}
		min = max;
		for (int k = 0; k < 4; k++)
		{
			if (a[k][maxj] < min) min = a[k][maxj];
		}
		if (max == min) { printf("\n一个鞍点是a[%d][%d]=%d\n", maxi, maxj, max); flag = 1;  break; }
	}
	if (flag == 0)printf("\nNO FOUND\n");

	return 0;
}