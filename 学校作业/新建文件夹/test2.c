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
	 
	
	printf("һ���Դ����꣬��ϢΪ          %.2f\n",p1);
	printf("�ȴ����꣬�ٴ����꣬��ϢΪ    %.2f\n",p2);
	printf("�ȴ����꣬�ٴ����꣬��ϢΪ    %.2f\n",p3);
	printf("һ��һ�棬������Σ���ϢΪ    %.2f\n",p4);
	printf("һ��һ�棬�������꣬��ϢΪ    %.2f\n",p5);
	return 0;
}
