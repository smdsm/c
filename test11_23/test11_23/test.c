#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("This is a C proglem.\n");
//
//	return 0;
//}

//int main()
//{
//	int a, b, sum;
//	a = 123; b = 456;
//	sum = a + b;
//	printf("sum is %d\n", sum);
//	return 0;
//}
#include <stdio.h>
int max(int x, int y);
//int main()
//{
//	int a, b, c;
//	printf("input a&b: ");
//	scanf("%d,%d", &a, &b);
//	c = max(a, b);
//	printf("max is %d\\n", c);
//	return 0;
//}

int max(int x, int y)
{
	int z;
	if (x > y)z = x;else z = y;
	return z;
}

//int main()
//{
//	int a, b, c,max1;
//	scanf("%d%d%d", &a, &b, &c);
//	max1 = max(a, max(b,c));
//	printf("max is %d\n", max1);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int c1, c2;
//	c1 = 197;
//	c2 = 198;
//	printf("%c %c\n", c1, c2);
//	printf("%d %d\n", c1, c2);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%db=%d", &a, &b);
//	scanf("%f%e", &x, &y);
//	scanf("%c%c", &c1, &c2);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int i, j, m=0, n=0;
//	i = 8;
//	j = 10;
//	m += i++;n -= --j;
//	printf("i=%d,j=%d,m=%d,n=%d\n", i, j, m, n);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	i = 8;
//	j = 10;
//	printf("%d,%d,%d,%d\n",i,j, i++, j++);
//	return 0;
//}


#include <stdio.h>
#include <math.h>
int main ()
{
	double r = 0;
	int n = 0;
	double p = 0;
	n = 10;
	printf("请输入年增长率（百分数格式）,结果会以小数形式输出");
	scanf("%lf%", &r);
	r = 0.01 * r;
	p = pow(1 + r, n);
	printf("与%d年前相比增长了%f\n", n, p);
	return 0;
}