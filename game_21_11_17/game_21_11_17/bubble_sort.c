#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[],int sz)//����
{
	
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð�ݹ���
		int j = 0;
		//һ��ð������ȽϵĶ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int  temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
