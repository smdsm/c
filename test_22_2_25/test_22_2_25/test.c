#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//单目操作符
//++  -- 
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++，后使用
//	printf("%d %d\n", a, b);
//	b = a++;//后置++，先使用和，后++
//
//	printf("%d %d\n", a, b);
//	printf("%d\n", a++);
//	printf("%d\n", ++a);
//
//	return 0;
//}

//  * 解引用（间接引用）操作符
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * 解引用（间接引用）操作符
//	printf("%d\n", a);
//
//	return 0;
//}

//(类型)  强制类型转换,不建议用
//int main()
//{
//	int a =(int)3.14;//3.14 - double ->int a
//	printf("%d\n", a);
//
//	return 0;
//}

//sizeof 和数组
//void test1(int arr[])//int* arr
//{
//	printf("%d\n", sizeof(arr));//4  （32位环境）
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	//sizeof int;//err   sizeof 用来计算类型所占的内存大小需要在括号内
//	int arr[10] = { 0 };//40
//	char ch[10] = { 0 };//10
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//传入的是首元素地址，计算的是指针变量的大小    4
//	test2(ch);//                                               4
//	return 0;
//}

// 关系操作符
//int main()
//{
//	int  a = 10;
//	if (5 ==a )//这样写只写了一个 = 就会报错
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//逻辑操作符 && ||
//int main()
//{
//	/*int age = 0;
//	scanf("%d", &age);
//
//	if (age > 0 && age < 18)
//		printf("未成年\n");*/
//
//	//输入月
//	int month = 0;
//	scanf("%d", &month);
//	if (month < 1 || month >12)
//		printf("输入错误");
//	else
//		printf("输入正确");
//	return 0;
//}

//360笔试题
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//  0 1  &&左操作数为假，后面均不进行运算
//	
//	i = a++ || ++b ||d++;
//	//  1 2  ||左操作数为真，后面不进行运算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

//条件(三目）操作符 - a?b:c;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);//可以简化代码
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}

//逗号表达式 - 从做向右依次执行，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 6;
//	int d = (a += 2, b = a - c, c = a + 2 * b);
//	//       a=5   b= 5-6 = -1 c = 5+-2 = 3
//	printf("%d\n", d);
//	return 0;
//}

//下标引用、函数调用和结构成员操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[7]);// []就是下标引用操作符
//	//arr[7] --> *(arr+7)-->*(7+arr)-->7[arr]
//	printf("%d\n", 7[arr]);// []就是下标引用操作符
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();//()- 函数调用操作符
//	return 0;
//}

// 结构成员访问操作符  访问结构成员 . ->
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Stu s1 = { "zhangsan",20,85.5 };
//	// .
//	printf("%s %d %.1lf\n", s1.name, s1.age, s1.score);//结构体变量.结构体成员
//	// ->
//	struct Stu* ps = &s1;
//	//printf("%s %d %.1lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);//结构体指针->结构体成员
//	return 0;
//}

//表达式求值

// 隐式类型转换
//int main()
//{
//	char a = 5;
//	//截断
//	//00000000000000000000000000000101 - 5
//	//00000101 - a
//
//	char b = 126;
//	//00000000000000000000000001111110 -126
//	//01111110 - b
//	//00000000000000000000000000000101 - a
//	//00000000000000000000000001111110 - b
//	//00000000000000000000000010000011
//	//  10000011 - c
//	//当a和b相加时，a和b的都是char类型
//	//表达式计算的时候就发生整型提升
//	//有符号数整型提升时高位补符号位，无符号数高位补0
//
//	char c = a + b;//相加时进行了整型提升转化为了int或unsigned int
//	//10000011 - c以整型打印时要整型提升
//	//11111111111111111111111110000011 - 补码
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101 - 原码-> -125
//
//	printf("%d\n", c);// -125
//
//	return 0;
//}

//算术转换
//char
//short - 整型提升
//int
//long
//long long
//float
//double - 算术转换

//寻常算术转换
//long double  <- double <- float <- unsigned long int <-long int <- unsigned int <-int 
//int main()
//{
//	int a = 3;
//  int b = 10;
//	float f = 5.5;
//	float r = a + f;//算术转换
//  a+b;//表达式有两个属性：值属性，类型属性，13是值属性，int是类型属性
//	return 0;
//}

//sizeof 内部的表达式不参与真实运算 操作符的运算在编译期间进行，表达式的运算在运行期间进行，编译和链接期间不进行表达式的运算

//操作符的属性 - 优先级 结合性 求值顺序
//控制求值顺序的操作符为逻辑与、逻辑或、条件操作符、逗号表达式
int main()
{
	int a = 10;
	int b = 20;
	//int c = a + b * 10;//优先级
	int c = a + b + 10;//相邻操作符的优先级相同是，结合性说了算
	//当一个代码无法确定一条唯一的计算路径时，这个代码就是有问题的
	c + --c;//问题代码
	//5 + 4 = 0
	//4 + 4 = 8

	return 0;
}