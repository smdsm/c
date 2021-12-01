#include <stdio.h>
#include <math.h>
int main()
{
	int x = 0,y = 0;
	printf("请输入一个0--1000之间的数字:->\n");
	scanf("%d",&x);
	if(x<0 ||x>1000)
	{
		printf("输入错误，请重新输入！\n");
		scanf("%d",&x);
	}	
	y = sqrt(x);
	printf("平方根是 %d",y);
	return 0;
}
