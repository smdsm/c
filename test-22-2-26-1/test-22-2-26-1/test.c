#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Ұָ��
//���Ұָ���ԭ��ָ��δ��ʼ����ָ��Խ����ʡ�ָ��ָ��Ŀռ��ͷ�
//int main()
//{
//	/*int a;
//	printf("%d\n", a);*/
//
//	//int* p;//Ұָ��(δ��ʼ����
//	//*p = 20;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)//��Խ����ʣ�
//	{
//		*p = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 100;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

//���Ұָ��
//ָ���ʼ��
//С��ָ��Խ��
//ָ�벻ʹ�õ�ʱ��ʹ��ֻ��ռ��ͷż���NULL
//���ⷵ�ؾֲ������ĵ�ַ
//ָ��ʹ��֮ǰ�����Ч��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	int* p = NULL;
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

//ָ������
//ָ��+-����,����һ����ָ�����͵ĳ���
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//ָ��-ָ��,ǰ��������ָ��ָ��ͬһ�������ռ䣬�õ��Ľ���ľ���ֵʱ������ַ����Ԫ�صĸ���
//int main()
//{
//	int a[10] = { 0 };
//	printf("%d\n", &a[9] - &a[0]);
//	printf("%d\n", &a[0] - &a[9]);
//	return 0;
//}
#include <string.h>
//1.������
int my_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}
//2.�ݹ�
int my_strlen2(char* s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + my_strlen2(s+1);
}
// 3.ָ��-ָ��
int my_strlen1(char* s)
{
	char* start = s;
	while (*s != '\0')
	{
		s++;
	}
	return s - start;
}
//���ַ������ȵĺ���
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen2(arr);
//
//	printf("%d\n",len);
//	return 0;
//}

//ָ��Ĺ�ϵ���㣨ָ��Ƚϴ�С��
//for (vp = &arr[5]; vp > &arr[0];)
//{
//	*--vp = 0;
//}

//ָ�������
//�����ָ��������������ǵ���ϵ�ǿ�����ָ������������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p == %p\n", p + i, &arr[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);//p[i]--> *(p+i)-->arr[i]
//	}
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa��һ������ָ��
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}

//ָ������,�Ǵ��ָ�������
//int main()
//{
//	int arr[5] = { 0 };
//	int* arr2[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = i;
//		arr2[i] = &arr[i];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* end = p + sz;
//	for (; p < end; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sn = 0;
//	for (i = 0; i < 5; i++)
//	{
//		n = n * 10 + a;
//		sn += n;
//	}
//	printf("%d", sn);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i;
//		int n = 0;
//		while (tmp > 0)
//		{
//			tmp /= 10;
//			n++;
//		}
//		int sum = 0;
//		tmp = i;
//		while (tmp > 0)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}



int main()
{
	int n = 13;
	int i = 0;
	int j = 0;
	for (i = 1; i <=(n+1)/2; i++)
	{
		for (j = 1; j <=(n+1)/2-i; j++)
		{
			printf("  ");
		}
		for (; j < (n + 1) / 2 + i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = (n + 1) / 2 + 1; i <= n; i++)
	{
		for (j = 1; j <= i - (n + 1) / 2; j++)
		{
			printf("  ");
		}
		for (; j <= n-i + (n + 1) / 2; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}