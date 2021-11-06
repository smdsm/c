#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Digui(int x)
{
	if (x > 9)
	{
		Digui(x / 10);
	}
		printf("%d  ", x % 10);
}

int JieCheng2(int n)
{
	int x = 1;
	int z = 1;
	while(x <= n)
	{
		z *= x;
		x++;
	}
	return z;
}
int jiecheng1(int n)
{
	int j = 1;
	if(n == 1)
	{
		j = 1;
	}
	else
	{
		j = jiecheng1(n - 1) * n;
	}
	return j;

}
//int main()//µÝ¹é
//{
//	int a = 0;
//	scanf("%d", &a);
//	 Digui(a)
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int y = jiecheng1(num);//µÝ¹éÇó½×³Ë
//	printf("µÝ¹é½á¹û%d\n", y);
//	int f = JieCheng2(num);
//	printf("·ÇµÝ¹é%d\n", f);
//
//	return 0;
//}

int my_strlen1(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

int my_strlen2(char* s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen2(s + 1);
	}
}
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", arr);
//	int len  = my_strlen1(arr);
//	printf("%d\n", len);
//	int len2 = my_strlen2(arr);
//	printf("%d\n", len2);
//
//	return 0;
//}
// 
// 
// 


//void reverse_string(char* string)
//{
//	int len = my_strlen2(string);
//	if (len <= 1)	
//		return;
//	else
//	{
//		char temp = string[0];	 
//		string[0] = string[len - 1]; 
//		string[len - 1] = '\0';	 
//		reverse_string(string + 1); 
//		string[len - 1] = temp;	 
//	}
//}
//
//int main()
//{
//	char ch[] = "abcdefghijklmno";
//	reverse_string(ch);
//	printf("%s ", ch);
//	printf("\n");
//	return 0;
//}


int digitsum(int n)
{
	if (n > 9)
	{
		return  n % 10 + digitsum(n / 10);
	}
	else
		return n;
	
}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = digitsum(num);
//	printf("%d", sum);
//	return 0;
//}



double nk(int a, int b)
{
	if (b > 0)
	{
		return a * nk(a, b - 1);
	}
	else if (b == 0)
		return 1;
	else
		return 1.0 / nk(a, -b);
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf", nk(n, k));
//}

int f(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return f(n - 1) + f(n - 2);
	}
}

int main()
{
	int a = 1;
	int b = 1;
	int n = 1;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}