#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a = 10;
	return 0;
}
#include <stdio.h>
int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <assert.h>

void left(char* str,int len,int num)
{
	assert(str != 0);
	assert((len >0) && (num>=0));
	char temp = 0;
	int i = 0;
	num %= len;
	while (num) 
	{
		temp = str[0];
		for (i = 0; i < len - 1; i++) {
			str[i] = str[i + 1];
		}
		str[i] = temp;
		num--;
	}
}

int main()
{
	char arr[] = "abcdefgh";
	int len = strlen(arr);
	int num = 0;
	printf("������Ҫ�����Ĵ�����");
	scanf("%d", &num);
	printf("%s\n", arr);
	left(arr,len,num);
	printf("%s\n", arr);
	return 0;
}

#include <stdio.h>

int find_num(int arr[3][3],int num,int*a,int*b)
{
	int x = *a-1, y = 0;
	int i = 0, j = 0;
	while (x >= 0 && y < *b)
	{
		if (num > arr[y][x])
		{
			y++;//��һ��
		}
		else if (num < arr[y][x])
		{
			x--;//��һ��
		}
		else
		{
			*a = x;
			*b = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,3,6,2,5,7,4,6,8 };
	int x = 3;
	int y = 3;
	int num = 5;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &num);
	int ret = find_num(arr, num, &x, &y);
	if (ret == 1)
	{
		printf("�ҵõ�\n");
		printf("�±��ǣ�%d %d\n", x + 1, y + 1);
	}
	else
	{
		printf("�Ҳ���\n");
	}

	return 0;
}
