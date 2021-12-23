#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void  change(int *p);
//int main()
//{
//	int a[5][5],i ,j;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			scanf("%d",&a[i][j]);
//	change(a);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//void change(int *p)
//{
//	int *max= p ,*min = p,i,j;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//		{
//			if (*(p + i * 5 + j) > *max)max = p + i * 5 + j;
//			if (*(p + i * 5 + j) < *min)min = p + i * 5 + j;
//		}
//	int t = *(p + 12); *(p + 12) = *max; *max = t;
//	t = *p; *p = *min; *min = t;
//	min = p+1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(p + i * 5 + j) < *min && (p + i * 5 + j)!= p)min = p + i * 5 + j;
//	t = *(p+4); *(p+4) = *min; *min = t;
//	min = p+1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(p + i * 5 + j) < *min && (p + i * 5 + j) != p && (p + i * 5 + j) != (p+4))min = p + i * 5 + j;
//	t = *(p + 20); *(p + 20) = *min; *min = t;
//	min = p + 1;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(p + i * 5 + j) < *min && (p + i * 5 + j) != p 
//				&& (p + i * 5 + j) != (p + 4) && (p + i * 5 + j) != (p + 20))min = p + i * 5 + j;
//	t = *(p + 24); *(p + 24) = *min; *min = t;
//}