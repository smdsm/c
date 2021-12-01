#include <stdio.h>
int main ()
{
	int score = 0;
	scanf("%d",&score);
	if(score >100 ||score <0)
	{
		printf("输入数据错误");
		return 0;
	}
	score /= 10;
	switch(score)
	{
		case 9:
		case 10:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
			break;
	 }
	return 0;
	
}


	 
	 	/*
	if(score >100 || score <0)
		printf("输入数据错误");
	else if(score >= 90)
		printf("A");
	else if(score >= 80)
		printf("B");
	else if(score >= 70)
		printf("C");
	else if(score >= 60)
		printf("D");
	else 
		 printf("E"); 
		 */
