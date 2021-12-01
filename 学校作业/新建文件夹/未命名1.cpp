#include<stdio.h>
int main ()
{
	char c1 ='T',c2='o',c3= 'd',c4 = 'a',c5 = 'y';
	c1 -= 4;
	if(c1<'A') c1 +=26;
	c2 -= 4;
	if(c2<'a') c2 +=26;
	c3 -= 4;
	if(c3<'a') c3 +=26;
	c4 -= 4;
	if(c4<'a') c4 +=26;
	c5 -= 4;
	if(c5<'a') c5 +=26;
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	printf("\n");
	printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
	return 0;
} 
