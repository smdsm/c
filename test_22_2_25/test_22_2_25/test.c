#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ŀ������
//++  -- 
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("%d %d\n", a, b);
//	b = a++;//����++����ʹ�úͣ���++
//
//	printf("%d %d\n", a, b);
//	printf("%d\n", a++);
//	printf("%d\n", ++a);
//
//	return 0;
//}

//  * �����ã�������ã�������
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * �����ã�������ã�������
//	printf("%d\n", a);
//
//	return 0;
//}

//(����)  ǿ������ת��,��������
//int main()
//{
//	int a =(int)3.14;//3.14 - double ->int a
//	printf("%d\n", a);
//
//	return 0;
//}

//sizeof ������
//void test1(int arr[])//int* arr
//{
//	printf("%d\n", sizeof(arr));//4  ��32λ������
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	//sizeof int;//err   sizeof ��������������ռ���ڴ��С��Ҫ��������
//	int arr[10] = { 0 };//40
//	char ch[10] = { 0 };//10
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//���������Ԫ�ص�ַ���������ָ������Ĵ�С    4
//	test2(ch);//                                               4
//	return 0;
//}

// ��ϵ������
//int main()
//{
//	int  a = 10;
//	if (5 ==a )//����дֻд��һ�� = �ͻᱨ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//�߼������� && ||
//int main()
//{
//	/*int age = 0;
//	scanf("%d", &age);
//
//	if (age > 0 && age < 18)
//		printf("δ����\n");*/
//
//	//������
//	int month = 0;
//	scanf("%d", &month);
//	if (month < 1 || month >12)
//		printf("�������");
//	else
//		printf("������ȷ");
//	return 0;
//}

//360������
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//  0 1  &&�������Ϊ�٣����������������
//	
//	i = a++ || ++b ||d++;
//	//  1 2  ||�������Ϊ�棬���治��������
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

//����(��Ŀ�������� - a?b:c;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);//���Լ򻯴���
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}

//���ű���ʽ - ������������ִ�У���������ʽ�Ľ�������һ������ʽ�Ľ��
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

//�±����á��������úͽṹ��Ա������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[7]);// []�����±����ò�����
//	//arr[7] --> *(arr+7)-->*(7+arr)-->7[arr]
//	printf("%d\n", 7[arr]);// []�����±����ò�����
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();//()- �������ò�����
//	return 0;
//}

// �ṹ��Ա���ʲ�����  ���ʽṹ��Ա . ->
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
//	printf("%s %d %.1lf\n", s1.name, s1.age, s1.score);//�ṹ�����.�ṹ���Ա
//	// ->
//	struct Stu* ps = &s1;
//	//printf("%s %d %.1lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->�ṹ���Ա
//	return 0;
//}

//����ʽ��ֵ

// ��ʽ����ת��
//int main()
//{
//	char a = 5;
//	//�ض�
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
//	//��a��b���ʱ��a��b�Ķ���char����
//	//����ʽ�����ʱ��ͷ�����������
//	//�з�������������ʱ��λ������λ���޷�������λ��0
//
//	char c = a + b;//���ʱ��������������ת��Ϊ��int��unsigned int
//	//10000011 - c�����ʹ�ӡʱҪ��������
//	//11111111111111111111111110000011 - ����
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101 - ԭ��-> -125
//
//	printf("%d\n", c);// -125
//
//	return 0;
//}

//����ת��
//char
//short - ��������
//int
//long
//long long
//float
//double - ����ת��

//Ѱ������ת��
//long double  <- double <- float <- unsigned long int <-long int <- unsigned int <-int 
//int main()
//{
//	int a = 3;
//  int b = 10;
//	float f = 5.5;
//	float r = a + f;//����ת��
//  a+b;//����ʽ���������ԣ�ֵ���ԣ��������ԣ�13��ֵ���ԣ�int����������
//	return 0;
//}

//sizeof �ڲ��ı���ʽ��������ʵ���� �������������ڱ����ڼ���У�����ʽ�������������ڼ���У�����������ڼ䲻���б���ʽ������

//������������ - ���ȼ� ����� ��ֵ˳��
//������ֵ˳��Ĳ�����Ϊ�߼��롢�߼������������������ű���ʽ
int main()
{
	int a = 10;
	int b = 20;
	//int c = a + b * 10;//���ȼ�
	int c = a + b + 10;//���ڲ����������ȼ���ͬ�ǣ������˵����
	//��һ�������޷�ȷ��һ��Ψһ�ļ���·��ʱ�������������������
	c + --c;//�������
	//5 + 4 = 0
	//4 + 4 = 8

	return 0;
}