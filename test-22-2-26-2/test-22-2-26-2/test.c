#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ��
//�����ṹ������
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//struct Stu
//{
//	struct S ss;
//	char name[20];//��Ա�б�
//	int age;
//	float score;
//}s1, s2;//s1,s2�ǽṹ���������ȫ�ֵ�
//void print1(struct Stu tmp)
//{
//	printf("%d %c %lf %s %d %f\n", tmp.ss.a, tmp.ss.c, tmp.ss.d, tmp.name, tmp.age, tmp.score);
//}
//void print2(struct Stu* ps)
//{
//	printf("%d %c %lf %s %d %f\n", ps->ss.a, ps->ss.c, ps->ss.d,ps->name,ps->age, ps->score);
//}
//int main()
//{
//	struct Stu s = { {100,'w',3.14},"zhangsan",20,85.5};//����һ���ṹ��������ֲ���
//	printf("%d %c %lf %s %d %f\n",s.ss.a,s.ss.c,s.ss.d, s.name, s.age, s.score);
//	print1(s);
//	print2(&s);
//	return 0;
//}
int func(int m)
{
	int n = m, s = 0;
	int sum = m;
	while (n)
	{
		n += s;
		sum += n / 2;
		s = n % 2;
		n /= 2;
	}
	return sum;
}
int main()
{
	int money = 0;
	scanf("%d", &money);
	int num = func(money);
	printf("%d\n", num);
	return 0;
}