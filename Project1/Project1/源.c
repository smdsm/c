#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    char arr[11] = { 0 };
//    char t;
//    int i = 0, j = 0, k = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%c", &arr[i]);
//    }
//    for (i = 0; i < 9; i++)
//    {
//        k = i;
//        for (j = i + 1; j < 10; j++)
//        {
//            if (arr[k] > arr[j])
//                k = j;
//        }
//        if (i != k)
//        {
//            t = arr[i];
//            arr[i] = arr[k];
//            arr[k] = t;
//        }
//    }
//    printf("%s", arr);
//    return 0;
//}
//int main()
//{
//	int a[10] = {'\0'}, x = 0, i = 0,j = 0;
//	/*for (i = 0; i < 3; i++)
//		scanf("%d", &a[i]);*/
//	while (scanf("%d", &a[i]) != EOF)
//	{
//		i++;
//	}
//	j = i-1;
//	for(i = 0;i<(j+1)/2;i++)
//	{
//		x = a[i]; a[i] = a[j - i]; a[j - i] = x;
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d,",a[i]);
//	}
//	printf("%d", a[j]);
//	return 0;
//}

//
//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	printf("test2\n");
//	test3();
//}
//void test1()
//{
//	printf("test1\n");
//	test2();
//}
//void test()
//{
//	printf("test\n");
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//����������ϸ�����������
//ջ����ʹ��ϰ������ʹ�øߵ�ַ��ʹ�õ͵�ַ
//���������±����������ַ�ɵ͵��߱任
//����release�汾�����Ż������������ѭ��


//const ����*�����
//const ���ε���ָ��ָ������ݣ�ָ��ָ������ݲ���ͨ��ָ�����ı�
// ����ָ����������ǿ��Ըı��
//const ����*���ұ�
//const ���ε�ָ���������ָ����������ݲ��ܱ��޸�
//����ָ��ָ��������ǿ���ͨ��ָ�����޸ĵ�


//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(*str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//char* my_strcpy(char * dest,const char *src)
//{
//	assert(dest && src);
//	char* p = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return p;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	const char* arr = "Hello bit!";
//
//	int len = my_strlen(arr);
//
//	printf("%s\n", my_strcpy(arr1, arr));
//	printf("len = %d\n",len);
//
//	return 0;
//}


#include <stdio.h>
#include <assert.h>

void change(int *x, int *y)
{
	assert(x && y);
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
void swap(int* str, int length)
{
	assert(str != NULL);
	int* left = str;
	int* right = str + length - 1;
	int temp = 0;
	while (left < right)
	{
		while (*left % 2 == 1)
		{
			left++;
		}
		while (*right % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			change(left, right);
			left++;
			right--;
		}
	}

}

void print(int* str,int length)
{
	assert(str != 0);
	for (; length>0; length--)
	{
		printf("%d ", *str++);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);

	swap(arr, len);
	print(arr,len);

	return 0;
}