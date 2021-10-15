#include <stdio.h>
int main ()
{
	int y;
	scanf("%d",&y);
	if (y%4==0&&y%100!=0||y%100==0&&y%400==0)
	printf("%d is runnian\n",y);
	else
	printf("%d is not runnian\n",y);
	return 0;
	
}
