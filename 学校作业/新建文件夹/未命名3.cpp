#include <stdio.h>
#include <math.h>
int main()
{
	int x = 0,y = 0;
	printf("������һ��0--1000֮�������:->\n");
	scanf("%d",&x);
	if(x<0 ||x>1000)
	{
		printf("����������������룡\n");
		scanf("%d",&x);
	}	
	y = sqrt(x);
	printf("ƽ������ %d",y);
	return 0;
}
