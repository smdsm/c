#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int mid = 0;
//	for (i = 0;i < 10 ;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 9-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


void init(int a[],int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		a[i] = 0;
	}
}
void print(int a[], int num) {
	int i = 0;
	for (i = 0; i < num; i++) 
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void reverse(int a[], int num)
{
	int t = 0;
	int left = 0;
	int right = num-1;
	while (left < right)
	{
		t = a[left];
		a[left] = a[right];
		a[right] = t;
		left++;
		right--;
	}
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	init(arr, 10);
//	print(arr, 10);
//	//reverse(arr, 10);
//	//print(arr, 10);
//	return 0;
//}


int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
	int s = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	int t = 0;
	for (i = 0; i < s; i++)
	{
		t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;

	}
	for (i = 0; i < s; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\n");
	for (i = 0; i < s; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;

}