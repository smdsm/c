#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[],int sz)//升序
{
	
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡过程
		int j = 0;
		//一趟冒泡排序比较的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int  temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
