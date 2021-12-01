#include <stdio.h>
int main ()
{
	double pi = 3.14159265358979;
	float r = 0,c,s,sq,vq,vyz;
	int h =0 ; 
	printf("输入圆的半径r，圆柱高h:");
	scanf("%f%d",&r,&h);
	c=2*pi*r;
	s=pi*r*r;
	sq=4*pi*r*r;
	vq=4*pi*r*r*r/3;
	vyz=pi*r*r*h;
	printf("圆周长是      %.2f\n",c);
	printf("圆面积是      %.2f\n",s);
	printf("圆球表面积是  %.2f\n",sq);
	printf("圆球体积是    %.2f\n",vq);
	printf("圆柱体积是    %.2f\n",vyz);
	return 0;
}
