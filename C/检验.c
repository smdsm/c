#include <stdio.h>

void main()
{
	
	double j,s=0;
	int i=1;
	int x;
	scanf("%d",&x);
	for (j=1;j<=x;j++)
	{
	
		s=s+i/j;
		i=-i;
	}
	printf("s= %f\n",s);
	return 0;
	//写程序要有条理，没有条理或许会导致程序运行失败！！！
	 

	
}

