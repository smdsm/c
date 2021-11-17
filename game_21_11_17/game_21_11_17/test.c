#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "bubble_sort.h"
int main()
{
	int arr[10] = { 1,0,3,2,5,4,6,9,8,7};
	int sz = sizeof(arr) / sizeof(arr[0]);//È·¶¨ÌËÊý
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < 10 ; i++)
	{
		printf("%d ", arr[i]);
	}
}
