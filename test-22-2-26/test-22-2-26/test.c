#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ��
//ָ����ǵ�ַ����ͷ��˵��ָ��ͨ��ָ����ָ�����


//int main()
//{
//	int a = 10;//���ڴ��п�����һ���ĸ��ֽڵĿռ�
//	int* pa = &a;//pa��ָ�����
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
//}//��ͬһ��ƽ̨��ָ��Ĵ�С����һ����

//ָ�����͵�����
//    //1.ָ�����;������ڽ�����ʱһ�����ܷ��ʼ����ֽڣ�ָ���Ȩ�ޣ�
//    //2.ָ�����;�����ָ����ǰ���������һ�����߶����루��λ���ֽڣ�
// 
// 
//ָ��Ľ����ò���
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
//	////���Ŵ�ӡ
//	//int* q = &arr[9];
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *q);
//	//	q--;
//	//}
//	return 0;
//}

//Ұָ��
//���Ұָ���ԭ��ָ��δ��ʼ����ָ��Խ����ʡ�ָ��ָ��Ŀռ��ͷ�
int mian()
{
	/*int a;
	printf("%d\n", a);*/

	//int* p;//Ұָ��(δ��ʼ����
	//*p = 20;

	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)//��Խ����ʣ�
	{
		*p = i;
	}
	return 0;
}