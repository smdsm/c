#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针
//指针就是地址，口头常说的指针通常指的是指针变量


//int main()
//{
//	int a = 10;//在内存中开辟了一个四个字节的空间
//	int* pa = &a;//pa是指针变量
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	char* pc;
//	int* pa;
//	double* pd;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pd));
//	return 0;
//}//在同一个平台下指针的大小都是一样的

//指针类型的作用
//    //1.指针类型决定了在解引用时一次性能访问几个字节（指针的权限）
//    //2.指针类型决定了指针向前或者向后走一步，走多大距离（单位是字节）
// 
// 
//指针的解引用操作
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	//int* --> 4
//	//char* --> 1
//	//double* --> 8
//
//	return 0;
//}

//int main() 
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//50
//	printf("%p\n", pa+1);//54
//
//	printf("%p\n", pc);//50
//	printf("%p\n", pc+1);//51
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = (char*)arr;
//
//
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	////倒着打印
//	//int* q = &arr[9];
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *q);
//	//	q--;
//	//}
//	return 0;
//}

//野指针
//造成野指针的原因：指针未初始化、指针越界访问、指针指向的空间释放
int mian()
{
	/*int a;
	printf("%d\n", a);*/

	//int* p;//野指针(未初始化）
	//*p = 20;

	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)//（越界访问）
	{
		*p = i;
	}
	return 0;
}