#include<stdio.h>
int main ()
{
	int a[10];
	int i = 0;
	for(i = 0;i<10;i++)
		scanf("%d",&a[i]);
	swap(a,3,10);
	for(i = 0;i<10;i++)
		printf("%d ",a[i]);
 } 
 void swap(int *p,int m,int n)
 {
 	int t ;
 	int *i;
 	while (m)
 	{
 		t = *(p+n-1);
 		for(i = p+m-1;i>p;i--)
 			*i=*(i-1);
 		*p = t;
	 }
 }
