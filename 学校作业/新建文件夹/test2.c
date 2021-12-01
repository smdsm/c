#include <stdio.h>
#include <math.h>
int main ()
{
	float money =1000;
	float r5 = 0.03,r3 = 0.0275,r2=0.021,r1=0.015,r0 = 0.0035;
	
	float p1 = money*(1+5*r5)- money;
	float p2 = money*(1+2*r2)*(1+3*r3)-money;
	float p3 = money*(1+3*r3)*(1+2*r2)-money;
	float p4 = money *pow (1+r1,5)-money;
	float p5 = money *pow(1+r0/4,4*5)-money;
	 
	
	printf("一次性存五年，利息为          %.2f\n",p1);
	printf("先存两年，再存三年，利息为    %.2f\n",p2);
	printf("先存三年，再存两年，利息为    %.2f\n",p3);
	printf("一年一存，连存五次，利息为    %.2f\n",p4);
	printf("一季一存，连存五年，利息为    %.2f\n",p5);
	return 0;
}
