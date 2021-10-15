#include <stdio.h>

int a[1000];
//输入不需要换行符 



int main()
{
	int x,i,j;
	scanf("%d",&x);
		
	printf("亮着的灯是；");
	for(i=1;i<=x;i++)
	{
		for(j=i;j<=1000;j++)
		{
			if (j%i==0)
			{
				a[j]=1-a[j];
			}
		}
	}
	
	for (i=1;i<=1000;i++)
	{
		if(a[i]==1)
		{
			printf("%d  ",i);
		}
	}
	
	return 0;
}
 
