// 2109030429 ∏µ–Ò…≠ 
#include<stdio.h>
#include <math.h>
float lon(int a[5][2]);
int main()
{
	int num[5][2];
	for(int i= 0;i<5;i++)
	{
		scanf("%d,%d",&num[i][0],&num[i][1]);
	}
	float l = lon(num);
	printf("%7.2f",l);
	return 0;
} 
float lon(int a[5][2])
{
	float l = 0;
	for(int i= 1;i<5;i++)
		l = l+sqrt((a[i][0]-a[i-1][0])*(a[i][0]-a[i-1][0])+(a[i][1]-a[i-1][1])*(a[i][1]-a[i-1][1]));
		return l;
}
