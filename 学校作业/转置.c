#include <stdio.h>
int arr2[4][3]={0};

void copy(int a1[3][4]);
int main ()
{
	int arr1[3][4]={0}; 
	int i,j;
	for (i = 0;i < 3;i++)
	{
		for ( j = 0;j< 4;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	copy(arr1); 
	for (i = 0;i < 4;i++)
	{
		for ( j = 0;j< 3;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
} 

void copy(int a1[3][4])
{
	int i ,j;
	for (i = 0;i < 3;i++)
	{
		for ( j = 0;j< 4;j++)
		{
			arr2[j][i]=a1[i][j];
		}
	}
}
