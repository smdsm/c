#include <stdio.h>
int main ()
{
	double pi = 3.14159265358979;
	float r = 0,c,s,sq,vq,vyz;
	int h =0 ; 
	printf("����Բ�İ뾶r��Բ����h:");
	scanf("%f%d",&r,&h);
	c=2*pi*r;
	s=pi*r*r;
	sq=4*pi*r*r;
	vq=4*pi*r*r*r/3;
	vyz=pi*r*r*h;
	printf("Բ�ܳ���      %.2f\n",c);
	printf("Բ�����      %.2f\n",s);
	printf("Բ��������  %.2f\n",sq);
	printf("Բ�������    %.2f\n",vq);
	printf("Բ�������    %.2f\n",vyz);
	return 0;
}
